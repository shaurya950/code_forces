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

	int t;
	cin >> t;

	while (t--){

		int n;
		cin >> n;

		int a[101];

		for (int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}

		if (n==1 and a[0]%2){
			cout << -1 << endl;

		}

		else{

			if (a[0]%2 == 0){
				cout << 1 << endl;
				cout << 1 << endl;
			}

			else if (a[0]%2 and a[1]%2){

				cout << 2 << endl;
				cout << 1 << " " << 2 << endl;

			}

			else{

				cout << 1 << endl;
				cout << 2 << endl;
			}
		}


	}

	return 0;
}