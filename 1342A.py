t = int(input())

for i in range(t):

	ans = 0

	x,y  = tuple(map(int,input().split()))

	a,b  = tuple(map(int,input().split()))

	if x>y:
		x,y = y,x

	diff = y-x

	ans = ans + a*diff

	diff = x-0

	ans = ans + min(b*diff,2*a*diff)

	print(ans)
