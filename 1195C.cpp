#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <utility> 

using namespace std;

int main(){

	vector<int64_t> inp[2];

	int64_t n;

	cin >> n;

	for (int i=0;i<2;i++){
		for (int j=0;j<n;j++){
			int t;
			cin >> t;
			inp[i].push_back(t);
		}
	}

	int64_t d1[n];
	int64_t d2[n];
	int64_t d3[n];

	d1[0] = inp[0][0];
	d2[0] = inp[1][0];

	d3[0] = 0;

	// cout << d1[0] << d2[0];


	for (int i=1;i<n;i++){

		d1[i] = max(d2[i-1]+inp[0][i],d3[i-1]+inp[0][i]);
		d2[i] = max(d1[i-1]+inp[1][i],d3[i-1]+inp[1][i]);
		d3[i] = max(d1[i-1],d2[i-1]);

	}

	int64_t t1 = max(d1[n-1],d2[n-1]);
	int64_t t2 = max(d3[n-1],t1);
	cout << t2 << "\n";
	return 0;
}