n = int(input())

nums = list(map(int,input().split()))

l = nums[:]
r = nums[:]



for i in range(1,n):
	l[i] = l[i]+l[i-1]

for i in range(n-2,-1,-1):
	r[i] = r[i]+r[i+1]

left = 0
right = n-1

ans = 0


while left < right:

	if l[left] == r[right]:
		ans = max(ans,l[left])
		left+=1
		right-=1
	elif l[left] < r[right]:
		left+=1
	elif  l[left] > r[right]:
		right-=1

print(ans)