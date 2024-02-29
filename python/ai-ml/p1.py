from sre_parse import State
from pomegranate import *
a = DiscreteDistribution({'1': 1./10, '0': 9./10})
c = DiscreteDistribution({'1': 1./2, '0': 1./2})

b = ConditionalProbabilityTable(
[[ '0', '0', 0.1 ],
[ '0', '1', 0.9 ],
[ '1', '0', 0.6 ],
[ '1', '1', 0.4 ]],[a])
d = ConditionalProbabilityTable(
[[ '0', '0', 0.4 ],
[ '0', '1', 0.6 ],
[ '1', '0', 0.7 ],
[ '1', '1', 0.3 ]],[c])

e = ConditionalProbabilityTable(
[[ '0', '0', 0.8 ],
[ '0', '1', 0.2 ],
[ '1', '0', 0.9 ],
[ '1', '1', 0.1 ]],[b])

h = ConditionalProbabilityTable(
[[ '0', '0', 0.3 ],
[ '0', '1', 0.7 ],
[ '1', '0', 0.5 ],
[ '1', '1', 0.5 ]],[e])

i = ConditionalProbabilityTable(
[[ '0', '0', 0.3 ],
[ '0', '1', 0.7 ],
[ '1', '0', 0.2 ],
[ '1', '1', 0.8 ]],[e])

f = ConditionalProbabilityTable(
[[ '0', '0', '1', 0.0 ],
[ '0', '1', '1', 0.2 ],
[ '1', '0', '1', 0.4 ],
[ '1', '1', '1', 0.7 ],
[ '0', '0', '0', 1.0 ],
[ '0', '1', '0', 0.8 ],
[ '1', '0', '0', 0.6 ],
[ '1', '1', '0', 0.3 ]],[b,d])

g = ConditionalProbabilityTable(
[[ '0', '0', 0.9 ],
[ '0', '1', 0.1 ],
[ '1', '0', 0.1 ],
[ '1', '1', 0.9 ]],[f])

#State objects hold both the distribution, and a high level name
A = State(a, name="A")
B = State(b, name="B")
C = State(c, name="C")
D = State(d, name="D")
E = State(e, name="E")
F = State(f, name="F")
G = State(g, name="G")
H = State(h, name="H")
I = State(i, name="I")

# Create the Bayesian network object with a useful name
model = BayesianNetwork("BAYESIAN NETWORK_1")

# Add the states to the network
model.add_states(A, B, C, D, E, F, G, H, I)
# Add edges which represent conditional dependencies, where the second node is conditionally dependent on the first node
model.add_edge(A, B)
model.add_edge(B, E)
model.add_edge(B, F)
model.add_edge(C, D)
model.add_edge(D, F)
model.add_edge(E, H)
model.add_edge(E, I)
model.add_edge(F, G)

#Lastly, the model must be baked to finalize the internals.
model.bake()

#a P(I|C)
print(round(model.predict_proba([{'C': '1'}])[0][8].parameters[0]['1'],4))

#b P (E|~D)
print(round(model.predict_proba([{'D': '0'}])[0][4].parameters[0]['1'],4))

#c P(G|B,~D)
print(round(model.predict_proba([{'B': '1', 'D': '0'}])[0][6].parameters[0]['1'],4))

print(model.probability([['1','1','1','1','1','1','1','1','1'],['1','1','1','1','1','1','1','0','1'],['1','1','1','0','1','1','1','1','0']]))
print(model.log_probability([['1','1','1','1','1','1','1','1','1'],['1','1','1','1','1','1','1','0','1'],['1','1','1','0','1','1','1','1','0']]))
print()
