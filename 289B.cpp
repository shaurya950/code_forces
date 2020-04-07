#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>

using namespace std;

int main(){

	int n,m,d;


	cin >> n >> m >> d;

	int a[n*m];
	int c = n*m;
	int k =0;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[k];
			k++;
		}
	}

	sort(a,a+c);

	int mid = floor(c/2);
	int e = a[mid];
	int ans = 0;

	int mod=a[0]%d;

	for (int i=0;i<c;i++){

		if (a[i] % d != mod){
			cout << -1 << "\n";
			return 0;
		}
		ans += abs(e-a[i]);
	}

	cout << ans/d << "\n";
	return 0;


}