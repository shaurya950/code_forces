import collections

n = int(input(""))
arr = [input("") for i in range(n)]

reg = collections.defaultdict(int)
for w in arr:
	if reg[w] == 0:
		print("OK")
		reg[w] +=1
	else:
		print(w+str(reg[w]))
		reg[w] +=1