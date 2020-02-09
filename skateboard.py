s = input("")

dp = s.count("0")+s.count("4")+s.count("8")

for i in range(len(s)-1):
	if int(s[i] + s[i+1])%4 == 0:
		dp += (i+1)

print(dp)