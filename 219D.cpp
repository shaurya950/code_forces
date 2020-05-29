#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>

using namespace std;

const int N = 200005;

std::vector<pair<int,int>> g[N];

int ans[N];
int n;

void dfs(int u,int p){

	for (auto v: g[p]){
		if (v.first != u){
			if (v.second == -1){
				ans[1]++;
			}

			dfs(p,v.first);
		}
	}

}

void calc(int u, int p){

	for (auto v: g[p]){
		if (v.first!=u){
			if (v.second == -1){
				ans[v.first] = ans[p]-1;
			}

			else{
				ans[v.first] = ans[p]+1;
			}
			calc(p,v.first);
		}
	}
}
int main(){

	cin >> n;

	for (int i=1;i<n;i++){
		int s,t;
		cin >> s;
		cin >> t;

		g[s].push_back({t,1});
		g[t].push_back({s,-1});
	}

	dfs(0,1);
	calc(0,1);

	int mn = n;

	for (int i=1;i<=n;i++){
		mn = min(mn,ans[i]);
	}
	cout << mn << endl;
	for (int i=1;i<=n;i++){
		if (ans[i] == mn){
			cout << i << " ";
		}
	}

	cout << endl;
	return 0;
}