#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lucky_number[] = {4,7,47,74,444,447,474,477,777,774,747,744};

    int n;
    cin>>n;
    bool cheak = false;
    for(int i=0;i<12;i++)
    {
        if(n==lucky_number[i] || n%lucky_number[i] == 0){
            cheak=true;
            break;
        }
    }
    if(cheak==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

    }
    return 0;
}
