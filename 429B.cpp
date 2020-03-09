#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

#define N 1005

int dp1[N][N],dp2[N][N],dp3[N][N],dp4[N][N];
int a[N][N];

int main(){

	int n,m;

	cin >> n >> m;

	for (int i=1;i <= n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}


	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp1[i][j] = max(dp1[i-1][j],dp1[i][j-1])+a[i][j];
		}
	}
	for(int i=n;i>0;i--){
		for(int j=m;j>0;j--){
			dp4[i][j] = max(dp4[i+1][j],dp4[i][j+1])+a[i][j];
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=m;j>0;j--){
			dp2[i][j] = max(dp2[i][j+1],dp2[i-1][j])+a[i][j];
		}
	}

	for(int i=n;i>0;i--){
		for(int j=1;j<=m;j++){
			dp3[i][j] = max(dp3[i][j-1],dp3[i+1][j])+a[i][j];
		}
	}


	int ans=0;

	for(int i=2;i<n;i++){
		for(int j=2;j<m;j++){
			ans = max(ans,dp1[i][j-1]+dp4[i][j+1]+dp2[i-1][j]+dp3[i+1][j]);
			ans = max(ans,dp1[i-1][j]+dp4[i+1][j]+dp2[i][j+1]+dp3[i][j-1]);
		}
	}

	cout << ans << endl;

	return 0;
}