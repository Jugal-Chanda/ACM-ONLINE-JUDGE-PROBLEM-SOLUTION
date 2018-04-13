#include<iostream>
using namespace std;
int main()
{
    bool pri=true;
    int n;
    cin>>n;
    bool labels[n];
    for(int i=0;i<n;i++)
    {
        labels[i]=false;
    }
    int p;
    cin>>p;
    for(int i=0; i<p; i++)
    {
        int a;
        cin>>a;
        labels[a-1]=true;
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int b;
        cin>>b;
        labels[b-1]=true;
    }

    for(int i=0;i<n;i++)
    {
        if(labels[i]==false)
        {
            pri=false;
        }
    }
    if(pri==true)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
