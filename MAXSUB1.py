def maxsubsum1(myvector):
  maxsum=0
  for i in range((len(myvector))):
    for j in range(i,len(myvector)):
      thissum=0
      for k in range (i,j):
       thissum=thissum+myarray[k]
       if(thissum>maxsum):
          maxsum=thissum
  return maxsum
myarray=[4,-3,15,-2,-1,2,-6,2]
print(maxsubsum1(myarray))
