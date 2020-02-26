#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;

	string s;

	cin >> s;

	int mid = (n/2);

	for(int i=mid;i>0;i--){
		if (s.substr(0,i) == s.substr(i,i)){
			cout << n-i+1 << "\n";
			return 0;
		}
	}

	cout << n << "\n";
	return 0;

}