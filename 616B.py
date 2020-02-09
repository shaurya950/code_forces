t = int(input(""))

for i in range(t):
	n = int(input(""))
	arr = list(map(int,input().split(" ")))

	prefix = 0

	for j in range(len(arr)):

		if arr[j] < j:
			break
		prefix = j

	suffix = len(arr)-1

	for j in range(len(arr)-1,-1,-1):
		if arr[j] < (len(arr)-1)-j:
			break
		suffix = j

	if suffix <= prefix:
		print("YES")
	else:
		print("NO")
