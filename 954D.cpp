#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int g[1001][1001] = {0};
vector<int> graph[1001];

int d1[1001]={0};
int d2[1001]={0};

int n,m,s,t;

void bfs(int node, int *d){

	int vis[1001]={0};
	vector<int> curr{node};
	int distance = 0;
	vis[node] = 1;
	while (curr.size()){
		vector<int> next_level;
		distance++;
		for (int next: curr){
			for (int next_node: graph[next]){
				if (vis[next_node]==0){
					next_level.push_back(next_node);
					vis[next_node]=1;
				}
			}
		}

		for (int t: next_level){
			d[t] = distance;
		}

		curr = next_level;
	}
}

int main(){
	scanf("%d%d%d%d",&n,&m,&s,&t);

	for (int i=0;i<m;i++){
		int u,v;
		scanf("%d%d",&u,&v);

		graph[u].push_back(v);
		graph[v].push_back(u);

		g[u][v]=1;
		g[v][u]=1;
	}

	bfs(s,d1);
	bfs(t,d2);

	int max_d = d1[t];


	int ans=0;

	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (g[i][j] == 0){
				if ( (d1[i] + d2[j] + 1 >= max_d) and (d2[i] + d1[j] + 1 >= max_d)){
					ans++;
				} 
			}
		}
	}
	cout << ans << "\n";
	return 0;

}