#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        if(a==1||b==1)
        {
            printf("Case %d: %d\n",t+1,(int)(a*b));
        }
        else if(a==2)
        {
            int x = b/4;
            if(x == 0)
                x+=1;
            int extra = (int)b%4;
            int ans = x*4;
            if(extra==3 && (int)(b/4) !=0)
            {
                extra = 2;
                ans = ans + (extra*2);
            }
            else if (extra<3 && (int)(b/4) !=0)
            {
                ans = ans + (extra*2);
            }

            printf("Case %d: %d\n",t+1,ans);
        }
        else if (b==2)
        {
            int x = a/4;
            if(x == 0)
                x+=1;
            int extra = (int)a%4;
            int ans = x*4;
            if(extra==3 && (int)(a/4) !=0)
            {
                extra = 2;
                ans = ans + (extra*2);
            }
            else if (extra<3 && (int)(a/4) !=0)
            {
                ans = ans + (extra*2);
            }

            printf("Case %d: %d\n",t+1,ans);

        }
        else
        {
            printf("Case %d: %d\n",t+1,(int)ceil((double)(a*b)/2));
        }

    }
    return 0;
}
