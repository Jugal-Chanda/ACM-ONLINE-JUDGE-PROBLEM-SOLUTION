#include<iostream>
using namespace std;
bool cheak=false;
int main()
{
    string num;
    getline(cin,num);
    for(int i=0;i<num.length();i++)
    {
        int cunt=0;
        for(int j=i;j<num.length();j++){
                if(num[i]==num[j]){
                    cunt=cunt+1;
                }else{
                    break;
                }
        }
        if(cunt==7){
            cout<<"YES\n";
            cheak=true;
            break;
        }
    }
    if(cheak==false){
        cout<<"NO\n";
    }
    return 0;

}
