n = int(input()) 
t=int((n-1)/2)
temp = t
while(t>=0):
    print("*"*t+"D"*(n-2*t)+"*"*t)
    t=t-1
t=1
while(t!=temp+1):
     print("*"*t+"D"*(n-2*t)+"*"*t)
     t=t+1
     

        



