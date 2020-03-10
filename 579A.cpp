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

	int n,ans=0;
	cin >> n;

	while (n){
		if (n&1){
			ans ++;
		}

		n = n >> 1;
	}

	cout << ans << endl;
	return 0;
}