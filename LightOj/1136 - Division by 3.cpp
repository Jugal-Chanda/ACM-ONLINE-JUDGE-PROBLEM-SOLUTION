#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        long int a,b;
        scanf("%ld%ld",&a,&b);
        int not_divisible = ceil((double)b/3);
        int ans_b = b-not_divisible;
        not_divisible = ceil((double)(a-1)/3);
        int ans_a = (a-1)-not_divisible;
        printf("Case %d: %d\n",t+1,ans_b-ans_a);
    }
    return 0;

}
