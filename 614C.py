n,q = tuple(map(int,input("").split(" ")))

bool_array = [[False for j in range(n)] for i in range(2)]

bad = 0

for i in range(q):
	r,c = map(lambda s: int(s)-1, input("").split(" "))
	bool_array[r][c] = not bool_array[r][c]
	if bool_array[r][c]:
		delta = 1
	else:
		delta = -1
	for col in range(-1,2):
		if c+col>=0 and c+col<n and bool_array[1-r][c+col]:
			bad += delta


	if bad >= 1:
		print("NO")
	else:
		print("YES")
