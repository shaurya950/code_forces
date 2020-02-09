from collections import defaultdict
_ = input("")

nums = list(map(int,input("").split(" ")))

dp = defaultdict(int)

for i in nums:
	dp[i] += i

dp[0] = 0

for i in range(2,max(nums)+1):
	dp[i] = max(dp[i-1],dp[i-2]+dp[i])

print(dp[max(nums)]) 
