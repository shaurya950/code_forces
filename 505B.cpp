#include <iostream>

using namespace std;

int g[101][101][101];
int flag,n,m;


void dfs(int u, int v, int col,int* vis){
	vis[u] = 1;
	if (u == v) {
		flag = 1;
		return ;
	}

	for (int i=1;i<n+1;i++){
		if (g[u][i][col] and vis[i]==0){
			dfs(i,v,col,vis);
		}
	}
	return;
}
int main(){

	cin >> n >> m;

	for (int i=0;i<m;i++){
		int a,b,c;
		cin >> a >> b >> c;
		g[a][b][c] = 1;
		g[b][a][c] = 1;

	}
	int q;
	cin >> q;

	while (q--){
		int u,v;

		cin >> u >> v;
		int ans=0;
		for (int i = 1; i < 101;i++){
			int vis[100]={0};
			flag = 0;
			dfs(u,v,i,vis);
			ans+=flag;
		}
		cout << ans << "\n";
	}
	return 0;
}