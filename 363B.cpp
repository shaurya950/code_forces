#include <iostream>  
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> inp;

	for (int i=0;i<2;i++){
		int x;
		cin >> x;
		inp.push_back(x);
	}

	int n = inp[0];
	int k = inp[1];

	vector<int> h;

	h.push_back(0);

	for (int i=0;i<n;i++){
		int x;
		cin >> x;
		h.push_back(x);
	}

	for (int i = 1;i<n+1;i++){
		h[i] = h[i]+h[i-1];
	}
	int out = INT_MAX;
	int index;
	for (int i = k;i<n+1;i++){
		int m = h[i]-h[i-k];
		if (m < out){
			out = m;
			index = i-k+1;
		}

	}
	cout << index<< "\n";
	return 0;
}