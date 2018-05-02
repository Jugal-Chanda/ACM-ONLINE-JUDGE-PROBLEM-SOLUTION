#include<bits/stdc++.h>
using namespace std;
int persons_wish[1000];
bool complete[1000];
bool person[1000];
int wish_taken[1000];
 
int convert_decimal(string a)
{
    int len=a.length();
    int sum=0;
    int n=0;
    for(int i=len-1; i>=1; i--)
    {
        double dici=pow(10.0,n);
        int ch=a[i]-48;
        sum=sum+(ch*dici);
        n++;
 
    }
    if(a[0]=='+')
    {
        return sum;
    }
    else
    {
        return sum*(-1);
    }
}
void reset()
{
    for(int i=0;i<1000;i++)
    {
        persons_wish[i]=0;
        complete[i]=0;
        person[i]=0;
        wish_taken[i]=0;
    }
}
 
 
int main()
{
    int test;
    cin>>test;
    for(int t=0; t<test; t++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        cin.ignore();
        for(int p=1; p<=n*k; p++)
        {
            string str;
            cin>>str;
            persons_wish[p]=convert_decimal(str);
        }
        int a;
        cin>>a;
        for(int i=1; i<=a; i++)
        {
            cin>>wish_taken[i];
        }
        for(int i=1; i<=n*k; i++)
        {
            if(persons_wish[i]>0)
            {
                for(int j=1; j<=a; j++)
                {
                    if(persons_wish[i]==wish_taken[j])
                    {
                        complete[i]=1;
                        break;
                    }
                }
            }
            else
            {
                bool x=true;
                for(int j=1; j<=a; j++)
                {
                    int c=persons_wish[i]*(-1);
                    if(c==wish_taken[j])
                    {
                        x=false;
                        break;
                    }
 
                }
                complete[i]=x;
            }
 
        }
        bool cheak=false;
        int per=0;
        for(int p=1; p<=n*k; p++)
        {
 
            if(complete[p]==1)
            {
                cheak=true;
            }
 
            if(p%k==0)
            {
                per=per+1;
                person[per]=cheak;
                cheak=false;
            }
        }
        bool ans=true;
        for(int i=1;i<=n;i++)
        {
            if(person[i]==0)
            {
                ans=false;
            }
        }
        if(ans==true)
        {
            cout<<"Case "<<t+1<<": "<<"Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<t+1<<": "<<"No"<<endl;
        }
        reset();
 
    }
    return 0;
}
 
