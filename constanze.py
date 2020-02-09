string = input("")

if "m" in string or "w" in string:
	print(0)
	exit()
dp = [1,1]
for i in range(1,len(string)):
	if string[i] == "n" and string[i-1] == "n":
		dp.append((dp[-1]+dp[-2])%((10**9)+7))
	elif string[i] == "u" and string[i-1] == "u":
		dp.append((dp[-1]+dp[-2])%((10**9)+7))
	else:
		dp.append(dp[-1]%((10**9)+7))

print(dp[-1])

