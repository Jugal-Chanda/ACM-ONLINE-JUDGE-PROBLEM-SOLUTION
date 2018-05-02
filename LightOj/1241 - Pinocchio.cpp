#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin>>test;
    for(int t=0; t<test; t++)
    {
        int n;
        cin>>n;
        int num[100];
        int count=0;
        num[0]=2;
        for(int i=1; i<=n; i++)
        {
            cin>>num[i];
            int diff=num[i]-num[i-1];
            int div=diff/5;
            int div2=diff%5;
            if(div2>0)
            {
                count++;
            }
            count=count+div;
 
 
        }
        cout<<"Case "<<t+1<<": "<<count<<endl;
    }
    return 0;
}
 
 
