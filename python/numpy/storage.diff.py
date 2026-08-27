import numpy as np

py_ar=[1, 2, 3, 4, 5]

np_ar=np.array(py_ar)
import sys 
print(sys.getsizeof(1)*len(py_ar),"size of python array")
print(np_ar.size*np_ar.itemsize,"size of numpy array")