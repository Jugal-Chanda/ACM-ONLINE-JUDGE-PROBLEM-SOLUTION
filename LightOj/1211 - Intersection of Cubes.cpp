#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for (int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        int fx1,fy1,fz1,fx2,fy2,fz2;
        scanf("%d%d%d%d%d%d",&fx1,&fy1,&fz1,&fx2,&fy2,&fz2);
        for(int i=0;i<(n-1);i++)
        {
            int x1,x2,y1,y2,z1,z2;
            scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
            if(x1>fx1)
                fx1 = x1;
            if(y1>fy1)
                fy1 = y1;
            if (z1>fz1)
                fz1 = z1;
            if (x2<fx2)
                fx2 = x2;
            if (y2<fy2)
                fy2 = y2;
            if (z2<fz2)
                fz2 = z2;
        }
        int ans = (fx2-fx1)*(fy2-fy1)*(fz2-fz1);
        if((fx2<fx1)||(fy2<fy1)||(fz2<fz1))
        {
            ans = 0;
        }
        printf("Case %d: %ld\n",t+1,ans);

    }
    return 0;
}
