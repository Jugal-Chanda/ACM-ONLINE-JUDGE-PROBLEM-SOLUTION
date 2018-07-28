#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        int pr1=0,pr2=0;
        if(num>10&&num<=20)
        {
            pr2=num-10;
            pr1=num-pr2;
        }
        else
        {
            pr2=num;
            pr1=0;
        }
 
        cout<<pr1<<" "<<pr2<<endl;
 
    }
    return 0;
}
 
