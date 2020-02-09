import collections



def dfs(graph,root,depth):
	max_depth = float("-inf")
	if len(graph[root]) == 0:
		return depth

	for children in graph[root]:
		d = dfs(graph,children,depth+1)
		max_depth = max(max_depth,d) 
	return max_depth


def main():

	n = int(input(""))

	graph = collections.defaultdict(list)
	root = []
	for i in range(1,n+1):

		parent = int(input(""))

		if parent == -1:
			root.append(i)
		else:
			graph[parent].append(i)

	max_depth = float("-inf")
	for r in root:
		depth = dfs(graph,r,1)
		if depth > max_depth:
			max_depth = depth

	print(max_depth)
	return

if __name__ == "__main__": 
	main()



