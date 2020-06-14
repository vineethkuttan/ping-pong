#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int t1=0;t1<t;t1++)
    {
        int hash[26]={0};
        string s;
        bool f=true;
        cin>>s;
        int k=s.length(),max=0;
        for(int i=0;i<k;i++)
        {
            hash[s[i]-'a']+=1;
            if(hash[s[i]-'a']>max)
                max=hash[s[i]-'a'];
            if(max>=2)
            {
                cout<<"Yes"<<endl;
                f=false;
                break;
            }
        }
        if(f)
            cout<<"No"<<endl;
        
    }
    return 0;
}
