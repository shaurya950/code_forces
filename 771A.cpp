#include <iostream>
#include <vector>


using namespace std;

vector<int> graph[150001];
int vis[150001]={0};

void dfs(int node,int &edges,int &vertices){
	vis[node] = 1;
	vertices++;
	edges += graph[node].size();

	for (int nei: graph[node]){
		if(!vis[nei]){
			dfs(nei,edges,vertices);
		}
	}
	return;
}

int main(){

	int n,m;
	scanf("%d%d",&n,&m);

	while (m--){
		int a,b;
		scanf("%d%d",&a,&b);

		graph[a].push_back(b);
		graph[b].push_back(a);

	}

	for (int v=1;v<=n;v++){
		if (vis[v] == 0){
			int count_vertices = 0;
			int count_edges = 0;
			dfs(v,count_edges,count_vertices);
			if (count_edges != (long long)count_vertices*(count_vertices-1)){
				cout << "NO" << "\n";
				return 0;
			}

		}
	}

	cout << "YES" << "\n";
	return 0;
}