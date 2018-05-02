#include<bits/stdc++.h>
using namespace std;
int binary (long long int n)
{
    int c=0;
    int div=n;
    while(div!=0)
    {
        int mod=div%2;
        if(mod==1)
        {
            c++;
        }
        div=div/2;
    }
    return c;
}
int main()
{
    int test;
    scanf("%d",&test);
 
    for(int t=0;t<test;t++)
    {
        long long int n;
        scanf("%lld",&n);
        int a=binary(n);
        if(a%2==0)
        {
            printf("Case %d: even\n",t+1);
        }
        else
        {
            printf("Case %d: odd\n",t+1);
        }
    }
    return 0;
}
 
