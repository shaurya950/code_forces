#include <iostream>  
#include <vector>
#include <algorithm>
using namespace std;

int main(){

int n;

cin >> n;

vector<int> l;

for(int i=0;i<n;i++){
	int x;
	cin >> x;
	l.push_back(x);
}
vector<int> dp;

for(int i=0;i<n;i++){
	dp.push_back(1);
}
for(int i = 1;i<n;i++){
	if(l[i]>l[i-1]){
		dp[i] = dp[i] + dp[i-1];
	}
}


cout << *max_element(dp.begin(),dp.end()) << "\n";
return 0;
}