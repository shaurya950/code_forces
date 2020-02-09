import collections
n = int(input(""))

nums = list(map(int,input("").split(" ")))

dp = collections.defaultdict(int)

for i in range(n):
	dp[nums[i]] = max(dp[nums[i]-1]+1,dp[nums[i]])

mx = max(dp.values())
ans = None
for i in dp:
	if dp[i] == mx:
		ans = i

output = []
for i in range(n)[::-1]:
	if nums[i] == ans:
		ans -=1 
		output.append(i+1)

print(len(output))
print(*output[::-1])
