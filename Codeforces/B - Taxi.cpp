#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int four=0,three=0,two=0,one=0,x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==4)
        {
            four++;
        }
        else if(x==3)
        {
            three++;
        }
        else if(x==2)
        {
            two++;
        }
        else
        {
            one++;
        }
    }

    int num=four+three;

    if(one>=three)
    {
        one=one-three;
    }
    else
    {
        one=0;
    }

    num=num+(two/2);
    two=two%2;

    if(two!=0)
    {
        if(one>=2)
        {
            one=one-2;
        }
        else if(one==1)
        {

            one=0;
        }
        num++;
    }

    for(int i=4;i>=1;i--)
    {
        num=num+(one/i);
        one=one%i;
    }

    cout<<num<<endl;
    return 0;

}
