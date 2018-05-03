#include<bits/stdc++.h>
using namespace std;
double PI = acos(-1);
int main()
{
    double R,r,H,h;
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        scanf("%lf%lf%lf%lf",&R,&r,&H,&h);
        double rw = r + (h*(R-r))/H;
        double ans = (PI*H*(pow(rw,3)-pow(r,3)))/(3*(R-r));
        printf("Case %d: %.8lf\n",t+1,ans);
    }
    return 0;
}
