#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[100001];

int u = -1;

int dfs(int node, int pre){

	int s = 0;

	for (int next: graph[node]){
		if (next != pre){
			s+= dfs(next,node);
		}
	}
	u += s%2;

	return s+1;

}

int main(){
	int n;
	cin >> n;

	if (n % 2){
		cout << -1 << "\n";
		return 0;
	}

	for (int i=0;i<n-1;i++){
		int a,b;
		scanf("%d%d",&a,&b);

		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1,0);

	cout << u << "\n";
	return 0;
}