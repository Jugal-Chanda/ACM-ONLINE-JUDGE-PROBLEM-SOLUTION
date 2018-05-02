#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        long long int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
 
        long long int dif_x=x2-x1;
        if(dif_x<0)
        {
            dif_x=dif_x*(-1);
        }
        long long int dif_y=y2-y1;
        if(dif_y<0)
        {
            dif_y=dif_y*(-1);
        }
 
        long long int gcd=__gcd(dif_x,dif_y);
        cout<<"Case "<<t+1<<": "<<gcd+1<<endl;
    }
    return 0;
}
 
