import math
n,k = tuple(map(int,input().split()))

nums = sorted(list(map(int,input().split())))

l = 0
r = n-1

while(l<r):

	x = (nums[l+1]-nums[l])*(l+1) + (nums[r]-nums[r-1])*(n-r)

	if x>=k:
		ans = max(nums[r]-nums[l] - math.floor(k/(l+1)),0)
		print(ans)
		exit(0)

	l+=1
	r-=1
	k-=x

print(0)