#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){

	long long int m=1000001;
	long long int i,j,n;

	vector<bool> primes(1000001,true);
    set<long long int> st;
    primes[0]=primes[1]=false;

    for(i=2;i*i<=m;i++)
    {
        if(primes[i])
        {
            for(j=i;i*j<=m;j++)
            {
                primes[i*j]=false;
            }
        }
    }

    for(i=2;i<=m;i++)
    {
        if(primes[i])
            st.insert(i*i);
    }

    cin >> n;

    while (n--){

    	long long int x;
    	scanf("%lld",&x);

    	if(st.find(x)!=st.end()){
    		cout << "YES\n";
    	}

    	else{
    		cout << "NO\n";
    	}


    }

    return 0;
}