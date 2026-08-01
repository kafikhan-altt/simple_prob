import random
l=[]
for i in range(23):
    l.append(random.randint(1, 366))
l.sort()
print(f'the list is {l}')
i=0
flag=0
length=len(l)
while(i<length-1):
    if l[i]==l[i+1]:
        print(f'the duplicate numbers is {l[i]}, {l[i+1]}')
        print(f'the index of the first duplicate number is {i}')
        flag=1
        break
    i+=1
if(flag==0):
    print("no duplicate numbers found"  )

