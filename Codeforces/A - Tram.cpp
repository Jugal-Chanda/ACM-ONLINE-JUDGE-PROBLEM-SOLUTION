#include<bits/stdc++.h>
using namespace std;
int main()
{
    int exit,enter,standing=0;
    int n,max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>exit>>enter;
        int x=(standing-exit)+enter;
        if(x>max)
        {
            max=x;
        }
        standing=x;
    }
    cout<<max<<endl;
    return 0;
}
