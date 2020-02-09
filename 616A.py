t= int(input(""))

for i in range(t):

	n = int(input(""))

	s = input("")

	temp = ""
	for j in s:
		if int(j)%2:
			temp += j
		if len(temp) == 2:
			break
	if len(temp)==2:
		print(int(temp))
	else:
		print(-1)