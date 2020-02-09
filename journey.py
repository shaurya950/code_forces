import collections
n = int(input(""))

graph = collections.defaultdict(list)

for i in range(n-1):
	edge = list(map(int,input("").split(" ")))

	graph[edge[0]].append(edge[1])
	graph[edge[1]].append(edge[0])

result = 0

# def dfs(graph,node,depth,visited):
# 	global result
# 	visited[node] = True
# 	flag = False
# 	for children in graph[node]:
# 		if visited[children] == False:
# 			flag = True
# 			dfs(graph,children,depth+1,visited)
# 	if flag == False:
# 		result.append(depth)
visited = [False]*(n+1)

stack = [(1,1,0)]

while stack:
	node,curr_prob,depth = stack.pop(0)
	visited[node] = True
	count = 0

	for children in graph[node]:
		if visited[children] == False:
			count+=1
	if count == 0:
		result += curr_prob*depth
	for children in graph[node]:
		if visited[children]==False:
			stack.append((children,curr_prob/count,depth+1))


print(result)

