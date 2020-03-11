#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>
using namespace std;
const int MAX=1e9+7;
int dp[8];
int main(){

	int n;

	cin >> n;

	for (int i=1;i<8;i++){
		dp[i] = MAX;
	}

	dp[0] = 0;
	for (int i=0;i<n;i++){

		int c;
		string s;

		cin >> c >> s;

		int tot=0;

		

		for(int j=0;j<s.size();j++){

			tot = tot | 1 << (s[j]-65);
		}

		for (int j=0;j<8;j++){
			dp[tot|j] = min(dp[j]+c,dp[tot|j]);
		}
	}

	if (dp[7] == MAX){
		cout << -1 << endl;
	}

	else{
		cout << dp[7] << endl;
	}
	return 0;
}