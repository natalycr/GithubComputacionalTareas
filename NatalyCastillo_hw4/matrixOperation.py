import numpy as np
import sys
import math 
import csv


file= np.loadtxt(sys.argv[1])

t=file[:,0]
y=file[:,1]
i=0
j=0

print t

Mtx=np.zeros([38,3]) # matriz a modificar para encontrar (g0, vo, yo)
maxi=3
maxj=38

 for j in range (38):
    Mtx[j,0]=1
    Mtx[j,1]=t[j]
    Mtx[j,2]=(t[j]**2)/2
    print Mtx[j,2]
 
TranMtx=np.zeros([3,38])
maxi=3
maxj=38
for i in range(maxi):
    for j in range (maxj):
        TranMtx[j,i]=Mtx[i,j]
        TranMtx[j,i]=Mtx[i,j]
        TranMtx[j,i]=Mtx[i,j]

'''
print file

#data=csv.reader(file, delimiter='\t')
matriz=[row.strip().split('\t') for row in file]

print matriz[2][2]

for row in csv.reader(file):
print (row[1])
'''
