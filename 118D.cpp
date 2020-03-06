#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

#define N1 101
#define N2 101

#define MOD 100000000

int n1,n2,k1,k2;
long long dp[101][101][11][11];

long long memo(int nf,int nh,int kf,int kh){

	if (dp[nf][nh][kf][kh] != -1){
		return dp[nf][nh][kf][kh];
	}

	long long ans=0;

	if (nf+nh == 0){
		dp[nf][nh][kf][kh]=1;
		return 1;
	}

	if (kf > 0 and nf >0){
		ans  = (ans + memo(nf-1,nh,kf-1,k2)) % MOD;
	}

	if (kh > 0 and nh >0){
		ans = (ans + memo(nf,nh-1,k1,kh-1)) % MOD;
	}

	dp[nf][nh][kf][kh] = ans;
	return ans;
}

int main(){

	memset(dp, -1, sizeof dp);
	cin >> n1 >> n2 >> k1 >> k2;
	cout << memo(n1, n2, k1, k2) << endl;

	return 0;


}