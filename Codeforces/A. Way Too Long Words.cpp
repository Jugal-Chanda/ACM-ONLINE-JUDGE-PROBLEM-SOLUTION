#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
    string str;
    getline(cin,str);
    if(str.length()<=10)
    {
        cout<<str<<endl;
    }
    else
    {
        cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    }
    }
    return 0;
}
