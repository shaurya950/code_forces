t  = int(input())

for i in range(t):

	k,n,a,b = tuple(list(map(int,input().split())))

	if b*n >= k:
		print(-1)
		continue

	if a*n < k:
		print(n)
		continue 

	l = 0
	r = n
	ans = -1
	while l <= r:

		mid = (l+r) // 2

		if  mid*a + (n-mid)*b < k:
			ans = max(mid,ans)
			l = mid +1

		elif mid*a + (n-mid)*b >= k:
			r = mid -1

	print(ans)


