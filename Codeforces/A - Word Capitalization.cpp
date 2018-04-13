#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=str.length();
    char x[1009];
    for(int i=1;i<len;i++)
    {
        x[i]=str[i];
    }
    x[0]=toupper(str[0]);
    x[len]='\0';
    cout<<x<<endl;
    return 0;
}
