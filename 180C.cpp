#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>
using namespace std;

#define N 100005

int main(){

	int dp[N];

	dp[0] = 0;
	int l = 0;

	string s;
	cin >> s;

	for(int i=0;i<s.size();i++){
		char c = s[i];
		int j = i+1;

		if (isupper(c)){
			dp[j] = min(dp[j-1]+1,l);
		}
		else{
			dp[j] = dp[j-1];
			l++;
		}
	}

	cout << dp[s.size()] << endl;

	return 0;
}