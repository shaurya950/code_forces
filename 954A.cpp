#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
char s[101];

int main(){
	int n;

	cin >> n;

	for (int i=0;i<n;i++){
		char t;
		cin >> t;
		s[i]=t;
	}

	int c = n;
	for (int i=1;i<n;i++){
		if (s[i] == 'R' and s[i-1] == 'U'){
			s[i] = 'D';
			c --;
		}
		else if(s[i] == 'U' and s[i-1] == 'R'){
			s[i] = 'D';
			c--;
		}

	}
	cout  << c << "\n";
	return 0;
}