N = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))


ans = b[0]/a[0]
for i in range(1,N):
    ans = min(b[i]/a[i],ans)
print(int(ans))

