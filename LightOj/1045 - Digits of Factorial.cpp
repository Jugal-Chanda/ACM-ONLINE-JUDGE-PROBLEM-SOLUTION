#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < double > v;
    v.push_back(0);
    for (int i=1;i< 1000010;i++)
    {
        v.push_back(v[i-1]+log(i));
    }

    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",t+1,(int)(v[a]/log(b))+1);
    }
    return 0;

}

