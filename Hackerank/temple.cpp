#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,s=0,ans;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>ans;
        v.push_back(ans);
        s+=ans;
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ans;
        if(ans>s)
        {
            cout<<-1<<endl;
        }
        else if (ans==s)
        {
            cout<<v.size()<<endl;
        }
        else
        {
            int c=0;
            for(int j=0;j<(int)v.size();j++)
            {
                c+=v[j];
                //cout<<c;
                if(c>=ans)
                {
                    cout<<j+1<<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}
