t = int(input())

for i in range(t):
	s = input()

	if s.count("0") == 0 or s.count("1") == 0:
		print(s)

	else:
		s = ["01"]*len(s)
		print(''.join(s))