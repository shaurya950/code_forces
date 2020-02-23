#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int a[1234567];
int v[1234567] = {0};
int main(){

	int n,t;

	scanf("%d %d", &n, &t);

	for (int i = 1; i < n; i++) {
    	scanf("%d", a + i);
    }

    int j = 1;
    v[j] = 1;
    while (j < t){
    	j += a[j];
    	v[j] = 1;
    }

    if (v[t]){
    	cout << "YES" << "\n";
    }
    else{
    	cout << "NO" << "\n";
    }




	return 0;
}