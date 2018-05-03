#include<bits/stdc++.h>
using namespace std;
long long int ara[10010];
int a,b,c,d,e,f,n;
void fn()
{
    ara[0] = a;
    ara[1] = b;
    ara[2] = c;
    ara[3] = d;
    ara[4] = e;
    ara[5] = f;
    for(int i=6;i<=n;i++)
    {
        long long int sum = 0;
        for(int j=i-6;j<i;j++)
        {
            sum+=ara[j]%10000007;
        }
        ara[i] = sum%10000007;
    }
}
int main()
{
    int caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        fn();
        printf("Case %d: %lld\n", ++caseno, ara[n] % 10000007);
    }
    return 0;
}
