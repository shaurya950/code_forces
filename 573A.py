hp = int(input())

d = {1:"A",0:"D",3:"B",2:"C"}
moves = [0,1,2]
output = []
o = {}

for i in moves:
	t = hp+i
	key = t%4
	output.append(d[key])
	o[d[key]] = i
print(str(o[min(output)]) + " " + str(min(output)))