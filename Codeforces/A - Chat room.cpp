#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char word[5] = {'h','e','l','l','o'};
    cin>>str;

    int len = str.length();
    bool cheak = false;
    int index = 0;
    string find_word = "";
    for(int i=0; i<len; i++)
    {
        if(str[i] == word[index])
        {
            find_word+=str[i];
            index++;
        }
        if(find_word.compare("hello") == 0)
        {
            cheak = true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(cheak == false)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
