n = int(input())

nums = list(map(int,input().split()))

l = [1]*n
r = [1]*n

for i in range(1,n):
	if nums[i] > nums[i-1]:
		l[i] = l[i-1]+1

for i in range(n-2,-1,-1):
	if nums[i] < nums[i+1]:
		r[i] = r[i+1]+1


ans = max(l)

if ans<n:
	ans += 1

for i in range(1,n-1):

	if nums[i-1]+1 < nums[i+1]:
		ans = max(ans,l[i-1]+r[i+1]+1)
print(ans)
print("\n")