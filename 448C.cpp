#include<bits/stdc++.h>
using namespace std;

int a[5001];

int dd(int l,int r,int h){
	if (l > r){
		return 0;
	}
	int m = min_element(a+l,a+r+1)-a;

	return min(r-l+1,dd(l,m-1,a[m])+dd(m+1,r,a[m])+a[m]-h);
}
int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	cout << dd(0,n-1,0) << "\n";
	return 0;
}