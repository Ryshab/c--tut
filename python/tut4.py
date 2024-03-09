# f=open("Myfile.txt", 'w')
# a=f.write("Rishabh is great")

f=open("Myfile.txt", 'a')
b=f.write("yes")
f.close()


f=open("Myfile.txt", 'r')
print(f.read())
f.close()