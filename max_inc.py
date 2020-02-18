n = int(input())

nums = list(map(int,input().split()))
dp = [1]*n

for i in range(1,n):
	if nums[i] > nums[i-1]:
		dp[i] += dp[i-1]
print(max(dp))