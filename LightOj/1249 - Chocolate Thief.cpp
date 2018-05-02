#include<bits/stdc++.h>
using namespace std;
 
string s_names[1000];
long int volum[1000];
int main()
{
    int test;
    cin>>test;
    for(int t=0; t<test; t++)
    {
        int students;
        cin>>students;
        string name;
        int length,height,width;
        for(int s=0; s<students; s++)
        {
            cin>>name;
            cin>>length>>width>>height;
            s_names[s]=name;
 
            volum[s]=length*height*width;
            cin.ignore();
        }
 
 
        for(int i=0;i<students;i++)
        {
            for(int j=i+1;j<students;j++)
            {
                if(volum[i]<volum[j])
                {
                    string tem;
                    tem=s_names[i];
                    s_names[i]=s_names[j];
                    s_names[j]=tem;
                    int v;
                    v=volum[i];
                    volum[i]=volum[j];
                    volum[j]=v;
                }
            }
        }
 
       if(volum[0]!=volum[students-1])
       {
           cout<<"Case "<<t+1<<": "<<s_names[0]<<" took chocolate from "<<s_names[students-1]<<endl;
       }
       else
       {
           cout<<"Case "<<t+1<<": "<<"no thief"<<endl;
       }
    }
    return 0;
}
 
