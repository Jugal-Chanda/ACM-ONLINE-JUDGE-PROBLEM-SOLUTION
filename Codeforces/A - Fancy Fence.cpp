//A - Fancy Fence
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        int extarnal=180-n;

        double x=extarnal*1.0;

        double div= 360/x;
        int y=div;
        double z= y;
        if(z==div)
        {

            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
