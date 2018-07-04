#include<bits/stdc++.h>
using namespace std;
int ex,nw,co;
void fun()
{
    int x = ex;
    int diff = ex - nw;
    if(diff/2<=nw)
    {
        if(diff%2==1)
        {
            ex = nw + 1;
            nw = nw - (diff/2);
        }
        else
        {
            ex = nw;
            nw = nw - (diff/2);
        }
        co+=(diff/2);
    }
    else
    {
        co+=nw;
        ex = ex - (2*nw);
        nw = 0;

    }

}
int main()
{
    cin>>ex>>nw;
    if(nw>ex)
    {
        int temp = nw;
        nw = ex;
        ex = temp;
    }

    while(ex-nw!=1 && ex != nw && ex!=0 && nw!=0)
    {
        fun();
    }
    int y=-1;
    if(ex-nw==1)
    {
        y = 1;
    }
    ex = nw;
    co+=(ex/3)*2;
    ex = ex - 3*(ex/3);
    nw = ex;
    ex+=y;
    while(1)
    {
        if(ex>=2 && nw>=1)
        {
            co+=1;
            ex = ex-2;
            nw = nw-1;
        }
        if(ex>=1 && nw>=2)
        {
            co+=1;
            ex = ex - 1;
            nw = nw-2;
        }

        if(ex<=1 and nw<=1)
        {
            break;
        }
    }
    cout<<co<<endl;

    return 0;
}
