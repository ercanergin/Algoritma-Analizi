def maxsubsum2(myvector):
  maxsum=0
  for i in range((len(myvector))):
    thissum=0
    for j in range(i,len(myvector)):
      thissum=thissum+myarray[j]
      if(thissum>maxsum):
        maxsum=thissum
  return maxsum
myarray=[4,-3,15,-2,-1,2,-6,2]
print(maxsubsum2(myarray))
