r1=[1,2,3]
r2=[4,5,6]
r3=[7,8,9]

r=[r1,r2,r3]
l=[]
l1=[11,12,13]
l2=[14,15,16]
l3=[17,18,19]
l=[l1,l2,l3]
sm=[[0,0,0],[0,0,0],[0,0,0]]
dim=3
for i in range(3):
    for j in range(3):
        sm[i][j]=r[i][j]+l[i][j]
print(sm)