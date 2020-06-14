#include <bits/stdc++.h> 
using namespace std; 
typedef pair<int,pair<int,int>> p;
bool comp2(p a,p b)
{
    return a.second.second>b.second.second;
}
bool comp1(p a,p b)
{
    return a.second.first<b.second.first;
}
int main()
{
    int t1;
    cin>>t1;
    for(int t=0;t<t1;t++)
    {
        int i,n,val;
        vector<int> v1,v2;
        vector<p> v;
        int day=0,cost=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>val;
            v1.push_back(val);
        }
        for(i=0;i<n;i++)
        {
            cin>>val;
            v2.push_back(val);
        }
        for(i=0;i<n;i++)
        {
            v.push_back(make_pair(i,make_pair(v1[i],v2[i])));
        }
        sort(v.begin(),v.end(),comp2);
        sort(v.begin(),v.end(),comp1);
        /*for(auto a:v)
        {
            cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<" "<<endl;
        }*/
        int m;
        cin>>m;
        map<int,int> mp;
        vector<bool> vis;
        for(i=0;i<n;i++)
        {
            mp[i]=i;
            vis.push_back(false);
        }
        for(i=0;i<m;i++)
        {
            int a,b;
            cin>>a;
            cin>>b;
            mp[b-1]=a-1;
        }
        while(v.size())
        {
            for(i=0;i<n;i++)
            {
                int d=v[i].first;
                if(mp[d]==d || vis[mp[d]])
                {
                    vis[d]=true;
                    day+=v[i].second.first;
                    cost+=day*v[i].second.second;
                    v.erase(v.begin()+i);
                    n-=1;
                    //cout<<day<<endl;
                    break;
                }
            }
        }
        cout<<cost<<endl;
    }
}