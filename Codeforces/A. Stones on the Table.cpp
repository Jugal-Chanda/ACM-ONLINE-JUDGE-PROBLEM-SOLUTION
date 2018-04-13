#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string s;
    getline(cin,s);

    int c=0;
    for(int i=1;i<t;i++)
    {
        if(s[i-1]==s[i])
        {

            c=c+1;
        }
    }
    cout<<c<<endl;
    return 0;
}
