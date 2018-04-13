#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,t,n;
    cin>>k>>t>>n;
    long long int sum = n+1;
    sum = n*sum;
    sum = sum/2;
    long long int ttk = sum*k;
    long long int lend = ttk - t;
    if(lend<0){
        lend = 0;
    }
    cout<<lend;

    return 0;
}
