import numpy as np
arr=np.array([[1, 2, 3, 4, 5],[6,7,8,9,10]], dtype='int16')
print(arr)
print(arr.ndim,"dimensions") #number of dimensions
print(arr.shape,"shape") #shape of array
print(arr.size,"size") #total number of elements
print(arr.dtype,"data type") #data type of array
print(arr.itemsize,"bytes per element\n") #size of each element in bytes

print("Object data type if dict\n")
w=np.array({34,23,23})
print(w.dtype)

print(np.abs(-1)) #absolute value
print(np.zeros((2,3)),"zeros") #array of zeros
print(np.ones((2,3)),"ones") #array of ones
print(np.empty((2,3)),"empty") #array of empty values
a=np.arange(10) #array of evenly spaced values
print(a,"arange")
print(a.reshape(2,5),"reshape") #reshaping array
print(np.linspace(1,10,5),"linspace") #array of evenly spaced values over a specified interval
