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

	long long int n;
	cin >> n;

	long long int a[n];
	for(int i=0;i <n; i++){
		cin >> a[i];
	}

	sort(a,a+n);

	if (a[0] == a[n-1]){
		cout << 0 << " " << (n*(n-1))/2 << endl;
	}

	else{
		long long int l=a[0];
		long long int r=a[n-1];

		long long int cl=0;
		long long int cr=0;

		for(int i=0;i<n;i++){
			if (a[i]==l){
				cl++;
			}

			if(a[i]==r){
				cr++;
			}
		}

		cout << r-l << " " << cl*cr<< endl;
	}

	return 0;
}