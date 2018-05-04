#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int n,m,num;
void pushLeft()
{
    if(n>v.size())
    {
        v.insert(v.begin(),num);
        printf("Pushed in left: %d\n",v[0]);
    }
    else
    {
        printf("The queue is full\n");
    }
}
void pushRight()
{
    if(n>v.size())
    {
        v.push_back(num);
        printf("Pushed in right: %d\n",num);
    }
    else
    {
        printf("The queue is full\n");
    }
}
void popLeft()
{
    if(v.size()>0)
    {
        printf("Popped from left: %d\n",v[0]);
        v.erase(v.begin());
    }
    else
    {
        printf("The queue is empty\n");
    }
}
void popRight()
{
    if(v.size()>0)
    {
        printf("Popped from right: %d\n",v[v.size()-1]);
        v.pop_back();
    }
    else
    {
        printf("The queue is empty\n");
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        printf("Case %d:\n",t+1);
        scanf("%d%d",&n,&m);
        for(int ncmd=0;ncmd<m;ncmd++)
        {
            string cmd_str;
            cin>>cmd_str;
            if(cmd_str == "pushLeft")
            {
                scanf("%d",&num);
                pushLeft();
            }
            else if(cmd_str == "pushRight")
            {
                scanf("%d",&num);
                pushRight();
            }
            else if(cmd_str == "popLeft")
            {
                popLeft();
            }
            else
            {
                popRight();
            }
        }
        v.clear();
    }
    return 0;
}
