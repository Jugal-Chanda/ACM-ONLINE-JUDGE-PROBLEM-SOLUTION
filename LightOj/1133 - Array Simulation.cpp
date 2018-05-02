#include<bits/stdc++.h>
using namespace std;
int arr[200];
 
void rev(int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int test;
    scanf("%d",&test);
 
    for(int t=0; t<test; t++)
    {
        int n,m;
        cin>>n>>m;
        for(int in=0; in<n; in++)
        {
            cin>>arr[in];
        }
        for(int i=0;i<m;i++)
        {
            char ch;
            cin>>ch;
            int x,y;
            if(ch=='S')
            {
                cin>>x;
                for(int j=0;j<n;j++)
                {
                    arr[j]+=x;
                }
            }
            else if(ch=='M')
            {
                cin>>x;
                for(int j=0;j<n;j++)
                {
                    arr[j]=arr[j]*x;
                }
            }
            else if(ch=='D')
            {
                cin>>x;
                for(int j=0;j<n;j++)
                {
                    arr[j]=arr[j]/x;
                }
            }
            else if(ch=='P')
            {
                cin>>x>>y;
                int tem=arr[x];
                arr[x]=arr[y];
                arr[y]=tem;
            }
            else if(ch=='R')
            {
                rev(n);
            }
 
        }
        printf("Case %d:\n",t+1);
 
        for(int i=0;i<n;i++)
        {
            printf("%d",arr[i]);
            if(i!=(n-1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
 
