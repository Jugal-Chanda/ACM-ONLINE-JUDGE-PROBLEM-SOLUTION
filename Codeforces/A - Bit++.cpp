#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a=0;
    string com;
     cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,com);
        if(!com.compare("X++")){

            a=a+1;
        }
        if(!com.compare("--X")){

            a=a-1;
        }
        if(!com.compare("++X")){

            a=a+1;
        }
        if(!com.compare("X--")){

            a=a-1;
        }


    }

    cout<<a<<endl;
    return 0;

}
