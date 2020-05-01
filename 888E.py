import bisect
 
n,M= tuple(map(int,input().split()))

nums = list(map(int,input().split()))

r1,r2 = [],[]
def dfs(index,last,sum,check):

    if index ==  last:
        if check == 1:
            r1.append(sum)
        else:
            r2.append(sum)
        return

    dfs(index+1,last,sum,check)
    dfs(index+1,last,(sum+nums[index])%M,check)

dfs(0,n//2,0,1)
dfs(n//2,n,0,2)
s1 = set()
s2 = set()

for i in r1:
    s1.add(i)

for i in r2:
    s2.add(i)

r1 = sorted(list(s1))
r2 = sorted(list(s2))



ans = 0
for x in r1:
    p = bisect.bisect_left(r2,M-x)
    ans = max(ans,x+r2[p-1])

print(ans)

