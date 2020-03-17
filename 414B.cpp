#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>
using namespace std;


long long dp[2048][2048];
long long mod = 1000000007;

long long n,k;
long long ans=0;
int main(){

	cin >> n >> k;

	for (int i=1;i<=n;i++){
		dp[1][i] = 1;
	}

	for (int l=1;l<k;l++){
		for(int j=1;j<=n;j++){
			for(int m=j;m<=n;m+=j){
				(dp[l+1][m] += (dp[l][j])) %= mod;
			}
		}
	}

	for(int i=1;i<=n;i++){
		(ans += (dp[k][i])) %= mod;
	}

	cout << ans << endl;


	return 0;
}