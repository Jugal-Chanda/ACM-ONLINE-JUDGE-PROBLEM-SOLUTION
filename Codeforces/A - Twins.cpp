#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    int coins[110];
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>coins[i];
        sum=sum+coins[i];
    }

    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(coins[j]>coins[i])
            {
                int temp = coins[j];
                coins[j]=coins[i];
                coins[i] = temp;
            }
        }
    }

    int sum1= 0;
    int pos = 0;
    for(int i=0;i<num;i++)
    {
        sum1=sum1+coins[i];
        sum=sum-coins[i];
        if(sum1>sum)
        {
            pos = i;
            break;
        }
    }
    cout<<pos+1<<endl;
    return 0;
}
