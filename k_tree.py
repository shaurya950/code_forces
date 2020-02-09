tree = list(map(int,input("").split(" ")))

n,k,d = tree[0],tree[1],tree[2]

dp = [[0 for i in range(2)] for j in range(n+1)]

dp[0][0] = 1
dp[0][1] = 0

mod = 1000000007 

for i in range(1,n+1):
	dp[i][0] = 0
	dp[i][1] = 0
	for j in range(1,k+1):

		if  i - j< 0:
			break

		if j >= d:
			dp[i][1] += dp[i-j][0]
			dp[i][1] += dp[i-j][1]

		else:
			dp[i][0] += dp[i-j][0]
			dp[i][1] += dp[i-j][1]

print(dp[n][1]%mod)