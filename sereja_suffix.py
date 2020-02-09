nm = list(map(int,input("").split(" ")))

nums = list(map(int,input("").split(" ")))

visited = [0]*(max(nums)+2)

result = 0

result = [0]

for i in range(len(nums)-1,-1,-1):
	count = 0
	if not visited[nums[i]]:
		count = 1
		visited[nums[i]] = 1

	result.append(result[-1]+count)

output = []
result.pop(0)
result = result[::-1]

for i in range(nm[1]):
	j = int(input(""))
	output.append(result[j-1])

for i in output:
	print(i)