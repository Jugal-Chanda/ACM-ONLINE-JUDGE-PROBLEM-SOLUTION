#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    bool c=false;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            c=true;
            break;
        }
    }
    if(c==false)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
