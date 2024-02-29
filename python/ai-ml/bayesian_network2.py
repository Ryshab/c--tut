from pomegranate import *
b = DiscreteDistribution({'T':0.002, 'F':0.998})
c = DiscreteDistribution({'T':0.001, 'F':0.999})

a = ConditionalProbabilityTable(
[['T','T','T',0.94],
['T','T','F',0.06],
['T','F','T',0.95],
['T','F','F',0.05],
['F','T','T',0.69],
['F','T','F',0.31],
['F','F','T',0.999],
['F','F','F',0.001]],[b,c])

n = ConditionalProbabilityTable([['T','T',0.91],['T','F',0.09],['F','T',0.05],['F','F',0.95]],[a])

i = ConditionalProbabilityTable([['T','T',0.75],['T','F',0.25],['F','T',0.02],['F','F',0.98]],[a])


B=State(b, name="Burglary")
C=State(c, name="Fire")
A=State(a, name="Alarm")
N=State(n, name="Neighbour Calls me")
I=State(i, name="I recieve alert message")

model= BayesianNetwork("BAYESIAN NETWORK_2")

model.add_states(B,C,A,N,I)

model.add_edge(B,A)
model.add_edge(C,A)
model.add_edge(A,N)
model.add_edge(A,I)

model.bake()

print(model.probability([['T','T','T','T','T'],['T','T','T','F','T'],['F','T','T','T','F']]))

print(model.log_probability([['T','T','T','T','T'],['T','T','T','F','T'],['F','T','T','T','F']]))

