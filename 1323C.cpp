#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>
using namespace std;

int main(){

	int n;

	cin >> n;

	if (n%2){
		cout << -1 << endl;
		return 0;
	}

	string s;

	cin >> s;

	int ans=0;
	int cnt=0;
	for (int i=0;i<n;i++){

		if (s[i] == ')'){
			cnt--;
		}

		else{
			cnt ++;
		}

		if (cnt < 0){
			ans ++;
		}

		else if (cnt ==0 and s[i]=='('){
			ans ++;
		}


	}

	if (cnt!=0){
		cout << -1 << endl;
		return 0;

	}
	cout << ans << endl;
	return 0;


}