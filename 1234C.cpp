#include <iostream>

using namespace std;

int main(){

	int q;
	cin >> q;

	for (int i=0;i<q;i++){
		string s[2];
		int n;
		cin >> n >> s[0] >> s[1];
		int row = 0;
		int j;
		for (j=0;j < n;j++){
			if (s[row][j] >= '3'){
				if (s[row^1][j] < '3'){
					break;
				}
				else{
					row = row^1;
				}
			}
		}
		if (j == n && row == 1){
			cout << "YES" << "\n";
		}
		else{
			cout << "NO" << "\n";
		}
	}
	return 0;
}