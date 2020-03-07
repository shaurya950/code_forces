#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

#define N 4005





int main(){

	int n,a,b,c;

	cin >> n >> a >> b >> c;

	vector<int> m = {a,b,c};
	int dp[N];
	fill( dp+1, dp + 4005, -1e9);

	dp[0] = 0;
	for (int i=0;i<n;i++){

		for (int d: m){
			if (i + d <= n and dp[i] > -1e9){
				// cout << dp[i] << " " <<  i << " " << d << " " << dp[i+d] << endl; ;
				dp[i+d] = max(dp[i+d],dp[i]+1);
			}
		}
	}

	cout << dp[n] << endl;

	return 0;
}