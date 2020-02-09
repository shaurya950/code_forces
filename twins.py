import math
n = int(input(""))
nums = list(map(int,input("").split(" ")))

s = sum(nums)
s =  s//2

nums.sort(reverse=True)
total = 0
count = 0
for i in range(len(nums)):
	total += nums[i]
	count+=1
	if total > s:
		break
print(count)



