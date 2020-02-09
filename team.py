
n = raw_input("")

n = int(n)

output = 0
for i in range(n):
	line = raw_input("")
	line = line.split(" ")

	sum = 0
	for l in line:
		if l == "1":
			sum +=1
	if sum >= 2:
		output +=1
print(output)