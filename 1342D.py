import math
import collections

n,k = tuple(map(int,input().split()))

m = sorted(list(map(int,input().split())))

c = list(map(int,input().split()))

g = [1]*n
g[-1] = 1

for i in range(n-2,-1,-1):
	g[i] += g[i+1]

ans = 1

for i in range(n):
	ans = max(ans,math.ceil(g[i]/c[m[i]-1]))

print(ans)

res = collections.defaultdict(list)

for i in range(n):
	res[i%ans].append(m[i])

for i in res:
	print(len(res[i]),end=" ")
	print(*res[i])
