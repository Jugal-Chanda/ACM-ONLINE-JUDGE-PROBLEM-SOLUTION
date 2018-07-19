#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,c,cm=0,cc=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m<c)
        {
            cc++;
        }
        else if(m>c)
        {
            cm++;
        }
        else
        {
            cm++;
            cc++;
        }
    }
    if(cm>cc)
    {
        cout<<"Mishka"<<endl;
    }
    else if(cm<cc)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
