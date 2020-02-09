t = int(input(""))

result = []
for i in range(t):

	n,s,k = tuple(map(int,input("").split(" ")))
	closed = list(map(int,input("").split(" ")))
	steps = 0
	while max(s-steps,1) in closed and min(s+steps,n) in closed:
		steps += 1
	result.append(steps)

for i in result:
	print(i)


