#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,test;
    scanf("%d",&test);
    for(int t=0; t<test; t++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        if((x1+y1)%2 !=  (x2+y2)%2)
        {
            printf("Case %d: impossible\n",t+1);
        }
        else
        {
            if((x1+y1) == (x2+y2))
            {
                printf("Case %d: 1\n",t+1);
            }
            else
            {
                int xt,yt;
                if(x1<x2)
                {
                    xt = x1-1;
                    x1 = x1-xt;
                    x2 = x2 - xt;
                    yt = y1 - 1;
                    y1 = y1 - yt;
                    y2 = y2 - yt;
                }
                else
                {
                    xt = x2-1;
                    x1 = x1-xt;
                    x2 = x2 - xt;
                    yt = y2 - 1;
                    y1 = y1 - yt;
                    y2 = y2 - yt;
                }

                if((x1==y1) && (x2==y2))
                {
                    printf("Case %d: 1\n",t+1);
                }
                else
                {
                    printf("Case %d: 2\n",t+1);
                }
            }
        }

    }

}
