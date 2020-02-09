t = int(input(""))

for j in range(t):
	n = int(input(""))

	if n == 2:
		print(1)
	elif n == 3:
		print(7)
	else:
		temp = ""
		if n % 2 == 0:
			for i in range(n//2):
				temp+="1"
		else:
			temp = "7"
			n = n - 3
			for i in range(n//2):
				temp+="1"
		print(int(temp))

