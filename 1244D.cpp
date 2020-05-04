#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>

using namespace std;
using ll = long long;

const int N = 100005;
int c[4][N];
vector<int> g[N];

int final[N];

ll dfs(int u,int v,int c1,int c2){
	int cc = 6-c1-c2;
	final[u] = cc;
	ll ans = c[cc][u];
	for(int nei : g[u]) if(nei != v) {
		ans += dfs(nei, u, cc, c1);
	}

	return ans;
}
int main(){

	int n;

	cin >> n;

	for (int i=1;i<4;i++){
		for (int j=1;j<=n;j++){
			cin >> c[i][j];
		}
	}


	for (int i=0;i<n-1;i++){
		int x,y;
		cin >> x >> y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	int root = -1;
	for (int i =1;i<=n;i++){

		if (g[i].size() > 2){
			cout << -1 << endl;
			return 0;
		}

		if (g[i].size() == 1){
			root = i;
		}
	}

	ll ans = 1e18;
	int ansa = -1;
	int ansb = -1;

	for (int a = 1;a<=3;a++){
		for (int b=1;b<=3;b++){
			if (a!=b){
				ll tmp = dfs(root, root, a, b);
				if(tmp < ans) {
					ans = tmp;
					ansa = a;
					ansb = b;
				}
			}
		}
	}

	dfs(root,root,ansa,ansb);

	cout << ans << endl;

	for (int i=1;i<=n;i++){
		cout << final[i] << " ";
	}
	cout << endl;




	return 0;



}