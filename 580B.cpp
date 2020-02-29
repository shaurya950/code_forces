#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <utility> 


using namespace std;
int main()
{
    long long n,d,s,i,j,kq;
	pair<long long,long long> a[100010];
	cin>>n>>d;
	for (i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n);
	s=i=kq=0;
	for (j=0;j<n;j++)
    {
		s+=a[j].second;
		while(a[j].first-a[i].first>=d) s-=a[i++].second;
		kq=max(kq,s);
	}
	cout<<kq;
}