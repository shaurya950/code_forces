##Find connected components using dsu

cc = 0

n = int(input(""))

def dfs(node):
	coordinates[node][-1] = res

	for i in range(n):
		if coordinates[i][-1] == -1 and (coordinates[node][0] == coordinates[i][0] or coordinates[node][1] == coordinates[i][1]):
			dfs(i)

coordinates = []
for i in range(n):
	x,y  = tuple(map(int,input("").split(" ")))

	coordinates.append([x,y,-1])

res = 0
for i in range(n):
	if coordinates[i][-1] == -1:
		dfs(i)
		res +=1 

print(res-1)


