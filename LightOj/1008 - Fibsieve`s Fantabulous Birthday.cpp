#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
 
    int t;
    int x,y;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        unsigned long long int n;
        cin>>n;
        long double number= double(n);
        long double lood=sqrt(n);
 
        unsigned long long int lood_int=lood;
        long double lood_int_double = lood_int;
        unsigned long long int lood_final=lood_int;
        if(lood_int_double!=lood)
        {
            lood_final=lood_int+1;
        }
        unsigned long long int range=(lood_int*lood_int)+(lood_final);
        if(range>=n)
        {
            if(lood_int%2==0)
            {
                y=n-(lood_int*lood_int);
                x=lood_final;
            }else
            {
                y=lood_final;
                x=n-(lood_int*lood_int);
            }
 
        }
        else
        {
            if(lood_final%2==1)
            {
                x=(lood_final*lood_final)-n;
                x=x+1;
                y=lood_final;
 
            }
            else{
                y=(lood_final*lood_final)-n;
                y=y+1;
                x=lood_final;
            }
 
 
        }
 
        if(lood_int_double==lood)
        {
            if(lood_int%2==1)
            {
                x=1;
                y=lood_int;
            }else
            {
                y=1;
                x=lood_int;
            }
        }
        cout<<"Case "<<i+1<<": "<<x<<" "<<y<<endl;
 
    }
    return 0;
}
 
