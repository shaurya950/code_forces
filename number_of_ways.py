n = int(input(""))
nums = list(map(int,input("").split(" ")))
s = sum(nums)
result = 0
if s % 3 == 0:
    s = s / 3
    t = s*2
    first = 0
    prefix = 0
    for i in nums[:-1]:
        prefix += i
        if prefix == t:
            result += first
        if prefix == s:
            first+=1
    print(result)
else:
    print(0)