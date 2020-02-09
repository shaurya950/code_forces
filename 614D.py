x0,y0,ax,ay,bx,by = tuple(map(int,input().split(" ")))
xs,ys,t = tuple(map(int,input().split(" ")))

important_points = [(x0,y0)]
for i in range(62):
	x0 = ax*x0 + bx
	y0 = ay*y0 + by

	important_points.append((x0,y0))

start = (xs,ys)

def dist(p1,p2):
	return abs(p1[0]-p2[0])+abs(p1[1]-p2[1])


maxx = 0
for i in range(62):
	for j in range(62):
		if dist(start,important_points[i])+dist(important_points[i],important_points[j])<=t:
			maxx = max(maxx,abs(j-i)+1)
print(maxx)

