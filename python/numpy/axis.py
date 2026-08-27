import numpy as np
arr=np.arange(9)
print(arr)
b=arr.reshape(3,3)
print(b)  
print(b.sum(axis=0))
print(b.argmax())
print(b.argmin(axis=0)) #index of minimum value along axis 0

print(b.ravel()) #flatten the array
  