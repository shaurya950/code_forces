import collections

nums = list(map(str,input().split()))

dd = collections.defaultdict(int)

for i in nums:
 	dd[i] += 1

 	if dd[i] == 3:
 		print(0)
 		exit()

for key in dd:
 	if dd[key] == 2:
 		print(1)
 		exit()

 	else:
 		tk0 = str(int(key[0]) + 1) + key[1]
 		tk1 = str(int(key[0]) + 2) + key[1]
 		tk2 = str(int(key[0]) - 1) + key[1]
 		tk3 = str(int(key[0]) - 2) + key[1]

 		if tk1 in dd and tk0 in dd:
 			print(0)
 			exit()
 		elif tk0 in dd and tk2 in dd:
 			print(0)
 			exit()

 		elif tk2 in dd and tk3 in dd:
 			print(0)
 			exit()

 		elif tk0 in dd or tk1 in dd or tk2 in dd or tk3 in dd:
 			print(1)
 			exit()

print(2)
exit()
