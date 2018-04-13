#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string word1,word2;
    getline(cin,word1);
    getline(cin,word2);
    for(int i=0;i<word1.length();i++)
    {
        word1[i]=tolower(word1[i]);
    }
    for(int i=0;i<word2.length();i++)
    {
        word2[i]=tolower(word2[i]);
    }
    cout<<word1.compare(word2);
    return 0;

}
