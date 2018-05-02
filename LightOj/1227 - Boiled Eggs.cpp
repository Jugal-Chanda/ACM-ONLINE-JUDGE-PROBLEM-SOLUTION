include<bits/stdc++.h>
using namespace std;
int weight[100];
int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {
        int n,p,q;
        cin>>n>>p>>q;
 
        for(int i=0;i<n;i++)
        {
            cin>>weight[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(weight[i]>weight[j])
                {
                    int temp=weight[i];
                    weight[i]=weight[j];
                    weight[j]=temp;
                }
            }
        }
        int sum=0;
        int cunt=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+weight[i];
            cunt++;
            if(sum>q||cunt>p)
            {
                cunt--;
                break;
            }
        }
        cout<<"Case "<<t+1<<": "<<cunt<<endl;
 
    }
    return 0;
 
}
 
