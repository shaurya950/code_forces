import collections 
count  = 0
line = input("")
line = line.split(" ")
n,m = int(line[0]), int(line[1])

arr = list(map(int,input("").split(" ")))

graph = collections.defaultdict(list)
for i in range(n-1):
	edge = input("").split(" ")
	graph[int(edge[0])].append(int(edge[1]))
	graph[int(edge[1])].append(int(edge[0]))

print(graph)

def helper(graph,root,arr,consecutive,m,visited):

	global count

	if root in visited:
		return

	visited.append(root)

	if graph[root] == []:
		consecutive += arr[root-1]
		if consecutive <= m:
			count += 1
		return

	if arr[root-1]:
		consecutive += 1
	else:
		consecutive = 0

	if consecutive > m:
		return

	for children in graph[root]:
		helper(graph,children,arr,consecutive,m,visited)
	return 


if graph[1] == []:
	print(0)
else:
	helper(graph,1,arr,0,m,[])
	print(count) 
