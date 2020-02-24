#include <iostream>
#include <vector>

using namespace std;
vector<int> graph[50001];
int n,k;
int dp[50001][501]={0};
int ans;

void dfs(int curr, int pre){

	dp[curr][0]=1;

	for (int next: graph[curr]){

		if (next != pre){

			dfs(next,curr);

			for (int j=1;j<=k;j++){
				ans += (long long)dp[curr][k-j]*dp[next][j-1];
			}

			for (int j=1;j<=k;j++){
				dp[curr][j] += dp[next][j-1];
			}
		}
	}
	return;

}



int main(){


	scanf("%d%d",&n,&k);

	for (int i=0;i<n-1;i++){
		int a,b;
		scanf("%d%d",&a,&b);

		graph[a].push_back(b);
		graph[b].push_back(a);


	}

	dfs(1,-1);
	cout << ans << "\n";
	return 0;
}