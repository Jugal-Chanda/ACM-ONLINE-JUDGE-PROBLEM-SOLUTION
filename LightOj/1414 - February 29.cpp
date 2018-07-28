#include<bits/stdc++.h>
using namespace std;
 
int divisible_by_something(long long int a,long long int b,int num)
{
    if(a%num==0)
    {
        return (b/num)-(a/num)+1;
    }else
    {
        return (b/num)-(a/num);
    }
 
}
int main()
{
    int te;
    cin>>te;
    cin.ignore();
    for(int t=0; t<te; t++)
    {
        string d1;
        getline(cin,d1);
        string d2;
        getline(cin,d2);
 
        int len1=d1.length();
        int len2=d2.length();
 
        string month1_s="";
        string month2_s="";
 
        string date1_s="";
        string date2_s="";
 
        string year1_s="";
        string year2_s="";
        int space=0;
        for(int i=0; i<len1; i++)
        {
            if(d1[i]==32)
            {
                space=space+1;
            }
            if(space==0)
            {
                month1_s+=d1[i];
            }
            if(space==1&&d1[i]!=44&&d1[i]!=32)
            {
                date1_s+=d1[i];
            }
            if(space==2&&d1[i]!=44&&d1[i]!=32)
            {
                year1_s+=d1[i];
            }
 
 
        }
        space=0;
        for(int i=0; i<len2; i++)
        {
            if(d2[i]==32)
            {
                space=space+1;
            }
            if(space==0)
            {
                month2_s+=d2[i];
            }
            if(space==1&&d2[i]!=44&&d2[i]!=32)
            {
                date2_s+=d2[i];
            }
            if(space==2&&d2[i]!=44&&d2[i]!=32)
            {
                year2_s+=d2[i];
            }
        }
 
        stringstream ob_year1(year1_s);
        long long int year1_i = 0;
        ob_year1>>year1_i;
 
        stringstream ob_year2(year2_s);
        long long int year2_i=0;
        ob_year2>>year2_i;
 
        stringstream ob_date1(date1_s);
        long long int date1_i=0;
        ob_date1>>date1_i;
 
        stringstream ob_date2(date2_s);
        long long int date2_i=0;
        ob_date2>>date2_i;
 
        string months[12]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
 
 
        int n_of_month1, n_of_month2;
 
        for(int i=0; i<12; i++)
        {
            if(!months[i].compare(month1_s))
            {
                n_of_month1=i;
            }
            if(!months[i].compare(month2_s))
            {
                n_of_month2=i;
            }
        }
        if(n_of_month1>1)
        {
            year1_i=year1_i+1;
        }
        if(n_of_month2==1)
        {
            if(date2_i<29)
            {
                year2_i=year2_i-1;
            }
        }
        if(n_of_month2==0)
        {
            year2_i=year2_i-1;
        }
 
        int vagses=year1_i%4;
        if(vagses!=0)
        {
            int add=4-vagses;
            year1_i=year1_i+add;
        }
 
        int leep=divisible_by_something(year1_i,year2_i,4);
        int div_100 = divisible_by_something(year1_i,year2_i,100);
        int div_400 = divisible_by_something(year1_i,year2_i,400);
        int sub= div_100-div_400;
        leep=leep-sub;
        cout<<"Case "<<t+1<<": "<<leep<<endl;
 
 
    }
    return 0;
}
 
