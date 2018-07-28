#include<bits/stdc++.h>
using namespace std;
 
int color[20010];
vector<int>adj[20010];
int mark[20010];
int cnt1 = 0,cnt2 = 0;
void bfs(int source)
{
    queue<int>work;
    work.push(source);
    color[source] = 0;
    cnt1++;
    //mark[source] = 1;
 
    while(!work.empty())
    {
        int p = work.front();
        work.pop();
        for(int i=0;i<adj[p].size();i++)
        {
            if(color[adj[p][i]] == -1)
            {
                if(color[p] == 1)
                {
                    color[adj[p][i]] = 0;
                    cnt1++;
                }
                else
                {
                    color[adj[p][i]] = 1;
                    cnt2++;
                }
                work.push(adj[p][i]);
            }
            if(mark[adj[p][i]]  == 0)
                mark[adj[p][i]] = 1;
 
        }
    }
}
 
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
 
        pair<int,int>mypair;
        queue<pair<int,int> >myque;
        int ans = 0;
        for(int i=0;i<20010;i++)
        {
            adj[i].clear();
            //mark[i] = 0;
            color[i] = -1;
        }
        for(int i=0;i<n;i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            myque.push(make_pair(u,v));
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<20010;i++)
        {
            if(color[i] == -1 && adj[i].size() != 0)
            {
 
                bfs(i);
                ans+=max(cnt1,cnt2);
                cnt1=0;
                cnt2=0;
            }
        }
        cout<<"Case "<<t+1<<": "<<ans<<endl;
    }
    return 0;
}
 
