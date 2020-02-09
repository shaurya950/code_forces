
n = input()
n = int(n)
inp_arr = raw_input()
x = inp_arr.split(" ")
int_arr = []

for i in x:
	int_arr.append(int(i))

int_arr.sort()
min_arr = [int_arr[0]+1]
min_var = 1
max_arr = [int_arr[0]-1]
max_var = 1


for i in range(1,len(int_arr)):

	if int_arr[i]-1 == min_arr[-1]:
		min_arr.append(int_arr[i]-1)
	elif int_arr[i]  == min_arr[-1]:
		min_arr.append(int_arr[i])

	elif int_arr[i]+1  == min_arr[-1]:
		min_arr.append(int_arr[i]+1)
	else:
		min_arr.append(int_arr[i]+1)
		min_var +=1




	if int_arr[i] - 1 > max_arr[-1]:
			max_arr.append(int_arr[i] -1)
			max_var+=1
	elif int_arr[i] != max_arr[-1] and int_arr[i] +1 != max_arr[-1]:
			max_arr.append(int_arr[i])
			max_var+=1

	elif int_arr[i] + 1 != max_arr[-1]:
			max_arr.append(int_arr[i] +1)
			max_var+=1
	else:
		max_arr.append(int_arr[i] +1)


print(str(min_var) + " " + str(max_var))








