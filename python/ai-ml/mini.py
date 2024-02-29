import math
scores = [3, 5, 2, 9, 12, 5, 23, 23]
temp_max={}
treeDepth = int(math.log(len(scores), 2))
print('Depth of the tree is :',treeDepth)

print('Elements in scores is: ',(scores))

flag=0
z=65
if(treeDepth%2!=0):
    for j in range(0,len(scores),2):
        if (j+1)<len(scores):
            Lchild=scores[j]
            Rchild=scores[j+1]
            if(Lchild>=Rchild):
                temp_max[chr(z)]=Lchild
                z=z+1
            else:
                temp_max[chr(z)]=Rchild
                z=z+1
    print(temp_max)
    flag=1
else :
    for j in range(0,len(scores),2):
        if (j+1)<len(scores):
            Lchild=scores[j]
            Rchild=scores[j+1]
            if(Lchild>=Rchild):
                temp_max[chr(z)]=Rchild
                z=z+1
                
            else:
                temp_max[chr(z)]=Lchild
                z=z+1
    print(temp_max)
    flag=0
#print(chr(z))
y=65
print(temp_max)
print('Number of elements in temp_max is : ',len(temp_max))
dict1=temp_max
#print(dict1)
loop=int(math.pow(2,treeDepth)-1)
print('Total number of states is: ',loop)
loop1=4
k=0
#for i in range(0,loop-4):
while(loop1<=loop+1):
    loop1=loop+1
    if (temp_max.get(chr(y+1)) is None):
        break
    if(flag==0):
        for j in range(0,len(temp_max)-k,2):
        
            if(loop1<=loop+1):
                L=temp_max.get(chr(y))
                R=temp_max.get(chr(y+1))
                if (L>=R):
                    #temp_max[chr(z)]=L
                    dict1[chr(z)]=L
                    z=z+1
                    y=y+2
                else:
                    #temp_max[chr(z)]=R
                    dict1[chr(z)]=R
                    z=z+1
                    y=y+2
                flag=1
                print(temp_max)
    else:
        for j in range(0,len(temp_max)-k,2):

            if(loop1<=loop+1):
                L=temp_max.get(chr(y))
                R=temp_max.get(chr(y+1))
                if (L>=R):
                    #temp_max[chr(z)]=R
                    dict1[chr(z)]=R
                    z=z+1
                    y=y+2
                else:
                    #temp_max[chr(z)]=L
                    dict1[chr(z)]=L
                    z=z+1
                    y=y+2
                print(dict1)
                flag=0
            k=k+2
print(temp_max)
value=temp_max.get(chr(y))
print(value)
list1=[]
for i in temp_max:
    if value == temp_max[i]:
        list1.append(i)
print(list1[::-1])
