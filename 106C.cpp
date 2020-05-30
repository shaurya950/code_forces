#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>

using namespace std;

int dp[1005];

int n,m,c0,d0;

int main(){

	cin >> n >> m >> c0 >> d0;

	fill(dp,dp+1005,0);

	for (int i=c0;i<=n;i++){
		dp[i] = dp[i-c0]+d0;
	}

	for (int i=0;i<m;i++){

		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int t = d;
		for(int j=0;j<a/b;j++){
			for(int k=n;k>=c;k--){
				dp[k] = max(dp[k],dp[k-c]+d);
			}
		}
	}

	cout << dp[n] << endl;
	return 0;
}