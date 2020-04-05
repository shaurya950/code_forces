t = int(input())

for i in range(t):

	temp = list(map(int,input().split()))

	n,m = temp[0],temp[1]

	curr_l,curr_r = m,m
	prev_time = 0
	flag = True

	for j in range(n):

		temp1 = list(map(int,input().split()))
		time,l,r = temp1[0],temp1[1],temp1[2]

		diff = time - prev_time

		rl = curr_l-diff
		rr = curr_r+diff

		if max(rl,l) > min(rr,r):
			print("NO")
			flag=False
			break

		prev_time = time
		curr_l,curr_r = l,r
	if flag:
		print("YES")







