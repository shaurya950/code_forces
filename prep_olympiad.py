n,l,r,x = tuple(map(int,input("").split(" ")))

nums = list(map(int,input("").split(" ")))

output = 0
for bit in range(2**n):
	temp = []
	for i in range(n):

		score = nums[i]

		if bit & 2**i:
			temp.append(score)

	if sum(temp) >= l and sum(temp) <= r and max(temp) - min(temp) >= x:
		output += 1

print(output)

