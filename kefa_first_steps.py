n = int(input(""))
nums = list(map(int,input("").split(" ")))

result = 1
curr = 1
for i in range(1,len(nums)):
	if nums[i] >= nums[i-1]:
		curr+=1
		result = max(result,curr)
	else:
		curr = 1

print(result)