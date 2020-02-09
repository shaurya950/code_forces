t = int(input(""))

for test in range(t):
	n,m,k = tuple(map(int,input("").split(" ")))
	nums = list(map(int,input("").split(" ")))

	before = m-1
	behind = n - m
	k = min(k,before)
	bestMove = 0
	for i in range(k+1):
		temp = float("inf")
		for j in range(before-k+1):
			myMove = max(nums[i+j],nums[i+j+behind])
			temp = min(temp,myMove)
		bestMove = max(bestMove,temp)

	print(bestMove)
