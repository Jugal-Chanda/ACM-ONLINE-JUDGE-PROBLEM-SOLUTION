#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string expresion;
    getline(cin,expresion);
    char numbers[100000];
    int j=0;
    for(int i=0;i<expresion.length();i++)
    {
        if(expresion[i]>=48&&expresion[i]<=57)
        {
            numbers[j]=expresion[i];
            j=j+1;
        }
    }
    numbers[j]='\0';

    for(int i=0;i<strlen(numbers);i++)
    {
        for(int j=i+1;j<strlen(numbers);j++)
        {
            if(numbers[j]<numbers[i])
            {
                char tem=numbers[j];
                numbers[j]=numbers[i];
                numbers[i]=tem;
            }
        }
    }
    for(int i=0;i<strlen(numbers);i++)
    {
        cout<<numbers[i];
        if(i<strlen(numbers)-1){
            cout<<"+";
        }
    }
    return 0;
}
