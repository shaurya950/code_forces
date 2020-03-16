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

	long long ans=1;

	vector<long long> v;


	for (int i=0;i<n;i++){
		long long t;

		cin >> t;

		if (t){
			v.push_back(i+1);
		}


	}

	if (v.size()==0){
		cout << 0 << endl;
		return 0;
	}

	long long last=0;
	int j=1;
	for(long long pos:v){

		if (j >1){
			ans = ans*(pos-last);
		}

		j++;

		last = pos;

	}

	cout << ans<< endl;
	return 0;
}