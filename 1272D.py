n = int(input())

nums = list(map(int,input().split()))

l = [1]*n
r = [1]*n

for i in range(1,n):
	if nums[i]> nums[i-1]:
		l[i] = l[i]+l[i-1]

for i in range(n-2,-1,-1):
	if nums[i] < nums[i+1]:
		r[i] = r[i]+r[i+1]


ans = max(l)

for i in range(n-2):
	if nums[i] < nums[i+2]:
		ans = max(ans,l[i] + r[i+2])

print(ans)