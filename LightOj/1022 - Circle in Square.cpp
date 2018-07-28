#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        double r;
        cin>>r;
        double a=r*2;
        double area_sqr=a*a;
        double pi=acos (0.0) * 2.0;
        double area_cir=pi*(r*r);
        double blue=area_sqr-area_cir;
        cout<<"Case "<<i+1<<": ";
        cout<<fixed<< setprecision(2)<<blue<<endl;
    }
    return 0;
}
 
