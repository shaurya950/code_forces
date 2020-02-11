import collections
MAXN = 1000*1000 + 5

fen = [0]*MAXN
c = [0]*MAXN

n = int(input())
a = list(map(int,input().split()))

m1 = collections.defaultdict(int)
m2 = collections.defaultdict(int)

for i in range(n-1,-1,-1):
	m1[a[i]] += 1
	x = m1[a[i]]
	while x < MAXN:
		c[x]+=1
		x += x & (-x)

res = 0
for i in range(n):
	x = m1[a[i]]
	m1[a[i]] -= 1

	y = m2[a[i]]
	m2[a[i]] += 1

	while x < MAXN:
		c[x]-=1
		x += x & (-x)

	while y > 0:
		print(i,y,c[y])
		res += c[y]
		y -= y & (-y)

print(res)