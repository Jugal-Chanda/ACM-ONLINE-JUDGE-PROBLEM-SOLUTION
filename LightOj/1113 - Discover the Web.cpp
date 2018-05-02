#include<bits/stdc++.h>
using namespace std;
int main()
{
    string website[100];
 
    int test;
    scanf("%d",&test);
    cin.ignore();
    for(int t=0; t<test; t++)
    {
        bool c=true;
        string arr[200];
        arr[0]="http://www.lightoj.com/";
        int k=0;
        cout<<"Case "<<t+1<<":"<<endl;
        while(c)
        {
            string cmd;
 
            getline(cin,cmd);
 
            string v="";
            string link="";
            for(int i=0; i<=4; i++)
            {
                v+=cmd[i];
            }
 
            if(!v.compare("VISIT"))
            {
                for(int i=6; i<cmd.length(); i++)
                {
                    link+=cmd[i];
                }
                k=k+1;
                arr[k]=link;
 
                for(int r=k+1;r<200;r++)
                {
                    arr[r]="";
                }
                cout<<arr[k]<<endl;
            }
            else if(!cmd.compare("BACK"))
            {
                k=k-1;
                if(k>=0)
                {
                    cout<<arr[k]<<endl;
                }
                else
                {
                    k++;
                    cout<<"Ignored"<<endl;
                }
 
            }
            else if(!cmd.compare("FORWARD"))
            {
                k=k+1;
                if(arr[k].compare("")!=0)
                {
                    cout<<arr[k]<<endl;
                }
                else
                {
                    k--;
                    cout<<"Ignored"<<endl;
                }
            }
            else if(!cmd.compare("QUIT"))
            {
                c=false;
            }
 
        }
 
    }
    return 0;
 
}
 
