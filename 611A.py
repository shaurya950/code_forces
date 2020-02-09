n = int(input(""))

new_year = 24*60
output = []
for i in range(n):
	time = list(map(int,input("").split(" ")))

	output.append(new_year - ((time[0]*60)+time[1]))

for o in output:
	print(o)
	