n  = int(input())

arr = map(int,input().split(" "))

nums = {
	4:1,
	8:2,
	15:3,
	16:4,
	23:5,
	42:6
}

pos = []

cnt = [0]*(7)

for i in arr:
	pos.append(nums[i])

for i in pos:

	if i == 1:
		cnt[i] += 1
	else:
		if cnt[i-1] > 0:
			cnt[i] += 1
			cnt[i-1]-=1

print(n - cnt[6]*6)



