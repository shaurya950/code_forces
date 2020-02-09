n = int(input(""))
nums = []

for i in range(n):
	nums.append(int(input("")))

for bit in range(2**n):
	temp = 0
	for i in range(n):
		t = nums[i]
		if bit & 2**i:
			temp += t
		else:
			temp -= t

	if temp % 360 == 0:
		print("YES")
		exit()

print("NO")