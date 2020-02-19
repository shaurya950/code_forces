#include <iostream>
#include <vector>

using namespace std;

int calc(int num){
	int result = 0;
	while (num){
		result += num%10;
		num = num/10; 
	}

	return result;
}

int main(){

	int n;
	cin >> n;
	int ans = 10; 
	while (n){
		ans += 9;
		if (calc(ans) == 10){
			n--;
		}
	}
	cout << ans << "\n";
	return 0;
}

