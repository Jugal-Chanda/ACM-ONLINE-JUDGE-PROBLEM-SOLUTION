#include<bits/stdc++.h>
using namespace std;
double PI = acos(-1);
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        double R,n;
        scanf("%lf%lf",&R,&n);
        double angle = PI/n;
        double value_of_sin = sin(angle);
        double ans = (R*value_of_sin)/(1+value_of_sin);
        printf("Case %d: %.10lf\n",i+1,ans);
    }
    return 0;
}
