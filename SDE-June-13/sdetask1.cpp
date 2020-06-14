#include <bits/stdc++.h> 
using namespace std; 
typedef pair<int,int> p;
queue<p> q;
#define MAX 250
int g[MAX][MAX],n,m;
bool temp[MAX][MAX];
int arr[][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
int c=0;
void place(int a,int b)
{
    temp[a][b]=true;
    c+=1;
   for(int i=0;i<8;i++)
    {
        int u=a-+arr[i][0];
        int v=b-arr[i][1];
        /*if(u>-1 && u<n && v>-1 && v<m && g[u][v] && !temp[u][v])
            cout<<a<<" "<<u<<" "<<b<<" "<<v<<endl;*/
        if(u>-1 && u<n && v>-1 && v<m && g[u][v] && !temp[u][v])
            q.push(make_pair(u,v));
    }
    while(!q.empty())
    {
        p k=q.front();
        q.pop();
        //cout<<k.first<<" "<<k.second<<endl;
        if(!temp[k.first][k.second])
            place(k.first,k.second);
    }

}
int main()
{
    int t1,t;
    cin>>t1;
    for(t=0;t<t1;t++)
    {
        cin>>n;
        cin>>m;
        int ma=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>g[i][j];
            }
        }
       /* for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<g[i][j];
            }
        }*/
        memset(temp,false,n*m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j] && !temp[i][j])
                {
                    place(i,j);
                    ma=max(ma,c);
                    c=0;
                }
            }
        }
        cout<<ma<<endl;
        //cout<<sizeof(temp);
    }
}