#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


#define N 100010

string s[N][2];
long long dp[N][2]={0};

int main(){

	int t;
	cin >> t;

	int c[N];

	for(int i=1;i<=t;i++){
		scanf("%d",&c[i]);
	}

	for(int i=1;i<=t;i++){
		cin >> s[i][0];

		s[i][1] = s[i][0];
		reverse(s[i][1].begin(),s[i][1].end());



		for(int j=0; j<2;j++){
			dp[i][j] = 1e18;

			for(int k=0;k<2;k++){
				if (s[i][j] >= s[i-1][k]){
					dp[i][j] = min(dp[i-1][k] + c[i]*j,dp[i][j]);
				}
			}
		}

	}

	long long ans = min(dp[t][0],dp[t][1]);

	if (ans >= 1e18){
		cout << -1 << "\n";
	} 

	else{
		cout << ans << "\n";
	}

	return 0;
}