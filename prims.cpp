#include <bits/stdc++.h> 
using namespace std; 
typedef pair<int,int> p;
void prims(vector<p> adj[],int s,int n)
{
    priority_queue<p,vector<p>,greater<p>> pq;
    int dis[n],parent[n];
    bool visit[n];
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
        parent[i]=-1;
        visit[i]=true;
    }
    pq.push(make_pair(0,s));
    dis[s]=0;
    parent[s]=s;
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        //cout<<u<<"vertex";
        visit[u]=false;
        for(auto x:adj[u])
        {
            int v=x.first;
            int w=x.second;
            //cout<<v<<" "<<w<<"   " <<pq.top().first<<"   "<<pq.top().second<<endl;
            if(visit[v] && dis[v]>w)
            {
                dis[v]=w;
                pq.push(make_pair(dis[v],v));
                parent[v]=u;
            }
        }

    }
    cout<<"here"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<" "<<i<<endl;
    }
    cout<<endl;
}
int main()
{
    int n,st,ed,e,i,wt;
    cout<<"Enter the no of vertices"<<endl;
    cin>>n;
    vector<p> adj[n];
    cout<<"Enter the no of edges"<<endl;
    cin>>e;
    for(i=0;i<e;i++)
    {
        //cout<<"Enter the start"<<i+1<<endl;
        cin>>st;
        //cout<<"Enter the end"<<i+1<<endl;
        cin>>ed;
        //cout<<"Enter the weight"<<i+1<<endl;
        cin>>wt;
        adj[st].push_back(make_pair(ed,wt));
        //adj[ed].push_back(make_pair(st,wt));
    }
    prims(adj,0,n);
}
