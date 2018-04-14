#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
int main()
{

    string m_word;
    char word[1000000];
    char replace_word[1000000];
    getline(cin,m_word);
    for(int i=0;i<m_word.length();i++)
    {
        word[i]=tolower(m_word[i]);
    }
    int j=0;
    for(int i=0;i<sizeof(word);i++){

            if(!(word[i]=='a'||word[i]=='e'||word[i]=='o'||word[i]=='i'||word[i]=='u'||word[i]=='y')){

                if(word[i]>=97&&word[i]<=127){

                    replace_word[j]='.';
                    replace_word[j=j+1]=word[i];
                    j=j+1;


                }
            }
    }
    replace_word[j]='\0';
    cout<<replace_word<<endl;

    return 0;


}
