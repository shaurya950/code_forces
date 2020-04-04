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

	int64_t n,m,k;

	cin >> n >> m >> k;

	int64_t a[n];

	for (int i=0;i < n;i++){

		int t;
		cin >> t;

		a[i]=t;
	}

	sort(a,a+n);
	reverse(a,a+n);

	int64_t ans=0;

	ans += floor(m/(k+1))*(a[0]*k + a[1]);
	ans += m%(k+1)*a[0];




	cout << ans<< endl;

	return 0;



}