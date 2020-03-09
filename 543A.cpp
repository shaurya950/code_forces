#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>
using namespace std;

#define N 505

long long dp[N][N];
long long n,m,b;
long long mod;



int main(){

	memset(dp, 0, sizeof dp);

	cin >> n >> m >> b >> mod;
	long long a[n];
	long long ans =0;

	for (int i=0;i<n;i++){
		cin >> a[i];
	}

	dp[0][0] = 1;
	for(int i=0;i<n;i++){
		for(int line=0;line<m;line++){
			for(int bug=0;bug+a[i]<=b;bug++){
				dp[line+1][bug+a[i]] = (dp[line+1][bug+a[i]] + dp[line][bug])%mod;

			}
		}
	}

	for(int i=0;i<=b;i++){
		ans += dp[m][i];
	}

	cout << ans%mod << endl;
	return 0;
}

