t = int(input())
for i in range(t):
    N,K = map(int,input().split())
    cash = list(map(int,input().split()))
    
    cash = sorted(cash)
    cash[-1]-=K
    product = 1
    for i in cash:
        product = product * i
    print(product)

