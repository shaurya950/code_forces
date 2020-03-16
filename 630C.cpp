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

	long long n;

	cin >> n;

	long long ans=0;
	long long  num=1;

	for (long long i=0;i<n;i++){
		num = num << 1;
		ans += num;
	}

	cout << ans << endl;
	return 0;
}