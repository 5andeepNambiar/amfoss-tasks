N,M = map(int,input().split())
val = list(map(int,input().split()))
found = False
for i in range(len(val)):
  if val.count(M-val[i])!=0:
    break
if found==True:
  print(True)
else:
  print(False)