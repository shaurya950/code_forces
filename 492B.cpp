#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

	int n,l;

	scanf("%d%d",&n,&l);

	int a[n];

	for (int i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		a[i] = t;
	}

	sort(a,a+n);

	double start,end;

	start = (double)a[0]-0.0;
	end = (double)l-(double)a[n-1];

	double max_dist = start;
	for (int i=1;i<n;i++){
		double temp = (double)a[i]-(double)a[i-1];
		max_dist = max(max_dist,temp/2.0);
	}

	max_dist = max(end,max_dist);

	printf("%0.9lf\n",max_dist);
	return 0;


}