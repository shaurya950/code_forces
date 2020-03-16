#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <cctype>
using namespace std;

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

double a[26];

int main(){


	int n;
	int ans=0;

	cin >> n;

	for(int i=0;i<n;i++){

		string s;

		cin >> s;
		a[toupper(s[0])-65] += 1;
	}

	for(int i=0;i<26;i++){

		int t = a[i];

		

		int f = ceil(a[i]/2);
		int s= floor(a[i]/2);


		ans = ans + (f*(f-1)/2) + (s*(s-1)/2);


	}

	cout << ans << endl;

	return 0;
}