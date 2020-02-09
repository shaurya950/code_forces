n = input("")
s = input("")
l = 0
r = 0

for i in s:
	if i == "L":
		l -= 1
	if i == "R":
		r += 1

print(r-l+1)