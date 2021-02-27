t = int(input())
for i in range(t):
    k = int(input())
    string = input().split(" ")
  
    if(len(string)<=k):
        print(-1)

    else:
        print(sum(map(ord,string[k])))