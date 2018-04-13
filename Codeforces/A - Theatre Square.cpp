#include<iostream>
using namespace std;
int main()
{
        unsigned long long int n,m,a,c=0;
        cin>>n>>m>>a;
        if(n<a&&m<a)
        {
            c=c+1;
        }
        else if(n<a)
        {
            c=m/a;
            if(m%a!=0)
            {
                c=c+1;
            }
        }
        else if(m<a)
        {
            c=n/a;
            if(n%a!=0)
            {
                c=c+1;
            }

        }
        else
        {
            c=(n/a)*(m/a);
            if(n%a!=0)
            {

                c=c+(m/a);
            }
            if(m%a!=0)
            {

                c=c+(n/a);
                if(n%a!=0)
                {
                    c=c+1;
                }
            }
        }
        cout<<c<<endl;
        return 0;
}
