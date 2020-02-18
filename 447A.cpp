#include <iostream>
#include <vector>

using namespace std;


int main(){

	string s;

	cin >> s;
	int q=0,a=0,ans=0;
	for (int i=0;i<s.size();i++){
		if (s[i] == 'Q'){
			ans+=a;
			q++;
		}
		else if (s[i]=='A'){
			a += q;
		}
	}
	cout << ans << "\n";
	return 0;


}