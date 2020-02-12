#include <bits/stdc++.h>
#define N 1000009
using namespace std;
int fw[N],a[N],r[N];
map<int,int> mp;
int main()
{
        int n,i,j;
        long long ans=0ll;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",a+i);
        for(i=n-1;i>=0;i--){
            r[i]=++mp[a[i]];
            for(j=r[i];j<=n;j+=(j&-j)) fw[j]++;
        }
        mp.clear();
        for(i=0;i<n;i++){
            for(j=r[i];j<=n;j+=(j&-j)) fw[j]--;
            for(j=mp[a[i]]++;j>0;j-=(j&-j)) ans+=fw[j];
        }
        printf("%lld\n",ans);
        return 0;
}