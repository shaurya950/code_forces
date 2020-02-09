import collections

n = int(input(""))
graph = collections.defaultdict(list)
for i in range(n-1):
	edge = list(map(int,input("").split(" ")))
	graph[edge[0]].append(edge[1])
	graph[edge[1]].append(edge[0])

visited = [False]*(n+1)
red = 0
green = 0

color = 0
stack = [(1,0)]

while stack:
	node,color = stack.pop(0)
	visited[node] = True
	if color == 0:
		red+=1
	else:
		green +=1
	for children in graph[node]:
		if visited[children] == False:
			stack.append((children,(color+1)%2))


print(red*green - (n-1))