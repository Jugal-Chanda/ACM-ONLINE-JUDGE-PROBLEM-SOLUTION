#include<bits/stdc++.h>
using namespace std;
char arr[21][21];
int visit[21][21];
int row,colom;
int cnt = 0;
int fx [] =  {0,0,1,-1};
int fy []  = {1,-1,0,0};
 
void bfs(int x,int y)
{
    queue<int>r;
    queue<int>c;
    r.push(x);
    c.push(y);
    while(!r.empty())
    {
        int a = r.front();
        int b = c.front();
        r.pop();
        c.pop();
        visit[a][b] = 1;
        cnt++;
        for(int i=0;i<4;i++)
        {
            int tempr = a + fx[i];
            int tempc = b + fy[i];
            if((tempr>=0 && tempr<row)&&(tempc >=0 && tempc <colom))
            {
                if(visit[tempr][tempc] == 0 && arr[tempr][tempc] == '.')
                {
                    r.push(tempr);
                    c.push(tempc);
                    visit[tempr][tempc] = 1;
                }
            }
        }
    }
}
int main()
{
    int test;
    cin>>test;
    for(int tc=0;tc<test;tc++)
    {
        cin>>colom>>row;
        cin.ignore();
        string str;
        for(int i=0;i<row;i++)
        {
            getline(cin,str);
            for(int j=0;j<colom;j++)
            {
                arr[i][j] = str[j];
            }
 
        }
        bool flag = 0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<colom;j++)
            {
                if(arr[i][j] == '@')
                {
                    bfs(i,j);
                    cout<<"Case "<<tc+1<<": "<<cnt<<endl;
                    cnt = 0;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
 
        for(int i=0;i<21;i++)
        {
            for(int j=0;j<21;j++)
            {
                visit[i][j] = 0;
            }
        }
    }
    return 0;
}
 
