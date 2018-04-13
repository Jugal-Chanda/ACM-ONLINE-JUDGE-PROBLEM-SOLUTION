#include<iostream>

using namespace std;

int main()
{
    bool ch[200];
    for(int i=0;i<200;i++)
    {
        ch[i]=false;
    }
    string user_name;
    getline(cin,user_name);

    int len=user_name.length();

    int c=0;
    for(int i=0;i<len;i++)
    {
        int ch1=user_name[i];
        if(ch[ch1]!=true)
        {
            ch[ch1]=true;
            c=c+1;
        }
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
