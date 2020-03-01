#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <utility> 

using namespace std;
int main(){
	int q;
	cin >> q;

	while (q--){
		int c,m,x;

		scanf("%d%d%d",&c,&m,&x);


		int l=0;
		int r = min(c,m);
		int ans=0;
		while (l<=r){
			int mid = (l+r)/2;

			if (c+m+x-2*mid >= mid){
				l = mid+1;
				ans = mid;
			}

			else{
				r = mid-1;
			}

		}

		cout << ans << "\n";
	}

	return 0;
}