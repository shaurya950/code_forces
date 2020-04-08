from collections import defaultdict
s = input()

d = defaultdict(int)

for i in s:
	d[i]+=1

nb,ns,nc = tuple(map(int,input().split()))
pb,ps,pc = tuple(map(int,input().split()))

cb = d["B"]
cs = d["S"]
cc = d["C"]

tot = int(input())


l = 0
r = 10**12

while l+1 < r:

	mid  = (l+r)//2

	value  = max(0,mid*cb - nb)*pb + max(0,mid*cs - ns)*ps +  max(0,mid*cc - nc)*pc


	if value > tot:
		r = mid

	else:
		l = mid

print(l)
