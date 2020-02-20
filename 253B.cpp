#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin >> n;

	vector<int> nums;

	for (int i=0;i<n;i++){
		int c;
		cin >> c;
		nums.push_back(c);
	}

	sort(nums.begin(),nums.end());

	int mi = INT_MAX;

	for (int i=0;i<n;i++){

		int ans = i;
		int up = upper_bound(nums.begin(),nums.end(),nums[i]*2) - nums.begin();

		ans += n - up;

		mi = min(ans,mi);
	}
	cout << mi << "\n";
	return 0;
}