#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int x;
    int solve=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<3;j++){
            cin>>x;
            if(x==1){
                c=c+1;
            }

        }

        if(c>=2){

                solve=solve+1;

            }

    }
    cout<<solve<<endl;
    
    
    return 0;



}
