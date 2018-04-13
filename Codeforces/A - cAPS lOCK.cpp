#include<iostream>
#include<ctype.h>
using namespace std;

void caps_lock(string s,int len)
{
    char x[1000];
    for(int i=0;i<len;i++)
    {
            if(s[i]>=97&&s[i]<=122)
            {
                x[i]=toupper(s[i]);
            }
            if(s[i]>=65&&s[i]<=90)
            {
                x[i]=tolower(s[i]);
            }
    }
    x[len]='\0';
    cout<<x<<endl;
}
int main()
{
    string str;
    getline(cin,str);

    int len=str.length();

    bool cheak=true;
    for(int i=1;i<len;i++)
    {
        int asci=str[i];
        if(asci<65||asci>90)
        {
            cheak=false;
        }
    }

    if(cheak==true)
    {
        caps_lock(str,len);
    }
    else{
        cout<<str<<endl;
    }
    return 0;

}
