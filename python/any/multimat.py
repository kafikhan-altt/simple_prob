
a=[[1,2,3],[4,5,6],[7,8,9]]
b=[[11,12,13],[14,15,16],[17,18,19]]
c=[[0,0,0],[0,0,0],[0,0,0]]
dim=3

for i in range(dim):
    for j in range(dim):
        for k in range(dim):
            c[i][j]=c[i][j]+a[i][k]*b[k][j]
print(c)
print("using numpy")
import numpy
X=numpy.asmatrix(a)
Y=numpy.asmatrix(b)
Z=X*Y
print(Z)