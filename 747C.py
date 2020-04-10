n,q = tuple(map(int,input().split()))

server = [0]*(n+1)
for i in range(q):
	t,k,d = tuple(map(int,input().split()))

	u,tot = 0,0

	for s in range(1,n+1):
		if server[s] <= t:
			u+=1

	if u < k:
		print(-1)
	else:
		u,tot = 0,0
		for s in range(1,n+1):
			if u == k:
				break
			if server[s] <= t:
				u+=1
				server[s] = t+d
				tot += s
		print(tot)


