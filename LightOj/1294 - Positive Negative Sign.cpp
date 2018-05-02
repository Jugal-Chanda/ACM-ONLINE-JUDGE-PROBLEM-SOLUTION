#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        long long int n,m;
        scanf("%lld%lld",&n,&m);
        long long int sq_m=m*m;
        long long int num=n/(2*m);
        long long int ans=num*sq_m;
        printf("Case %d: %lld\n",t+1,ans);
    }
    return 0;
}
 
