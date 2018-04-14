#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[k-1];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=x&&a[i]>0)
        {
            ans=ans+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
