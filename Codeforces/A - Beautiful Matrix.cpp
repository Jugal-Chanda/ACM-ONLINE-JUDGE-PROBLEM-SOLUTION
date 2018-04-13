#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,colom;
    int n;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&n);
            if(n==1)
            {
                row=i;
                colom=j;
            }
        }
    }

    int x=colom-3;
    if(x<0)
    {
        x=x*(-1);
    }
    int y=row-3;
    if(y<0)
    {
        y=y*(-1);
    }

    printf("%d",x+y);
    return 0;

}
