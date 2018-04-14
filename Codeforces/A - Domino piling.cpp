#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m>n){

        int a=m/2;
        int b=n*a;
        if(m%2!=0){

            int c=n/2;
            b=b+c;
        }
        cout<<b<<endl;
    }

    else{
        int a=n/2;
        int b=m*a;
        if(n%2!=0){

            int c=m/2;
            b=b+c;
        }
        cout<<b<<endl;
    }

    return 0;

}
