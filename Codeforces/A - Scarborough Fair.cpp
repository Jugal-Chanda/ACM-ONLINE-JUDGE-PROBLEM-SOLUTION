#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char word[150];
    scanf("%s",word);
    for(int i=0;i<m;i++)
    {
        int l,r;
        char c1,c2;
        cin>>l>>r>>c1>>c2;
        for(int j=l;j<=r;j++)
        {
            if(word[j-1]==c1)
            {
                word[j-1]=c2;
            }
        }
    }

    printf("%s\n",word);
    return 0;
}
