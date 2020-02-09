n = int(input(""))
boys = list(map(int,input("").split(" ")))

m = int(input(""))
girls = list(map(int,input("").split(" ")))


boys.sort()
girls.sort()

b = 0
g = 0 
count = 0
while b < len(boys) and g < len(girls):

	if abs(boys[b] - girls[g]) <= 1:
		b += 1
		g += 1
		count += 1

	else:
		if boys[b] < girls[g]:
			b +=1
		else:
			g += 1

print(count)

