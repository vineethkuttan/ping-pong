/*
Given a number N, print all the prime factors and their powers. Here N <= 10^18
 Input : 1000000000000000000
Output : 2  18
         5  18
Explanation: The prime factors of 1000000000000000000
are 2 and 5. The prime factor 2 appears 18 times in 
the prime factorization. 5 appears 18 times.
*/
#include<iostream>
#include<map>
#include<cmath>
#define lli long long int
using namespace std;
map<int,int> mp;
void primefactors(lli n)
{
    while(n%2==0)
    {
        if(mp.find(2)==mp.end())
        {
            mp[2]=1;
        }
        else
        {
            mp[2]+=1;
        }
        n=n/2;
    }
    //cout<<n<<endl;
    lli i;
    lli k=sqrt(n);
    for(i=3;i<=k+1;i+=2)
    {
        //cout<<i<<endl;
        while(n%i==0)
        {
            //cout<<i<<endl;
            if(mp.find(i)==mp.end())
            {
                mp[i]=1;
            }
            else
            {
                mp[i]+=1;
            }
            n=n/i;
        }
    }
    if(n>2)
    {
        if(mp.find(n)==mp.end())
        {
            mp[n]=1;
        }
        else
        {
            mp[n]+=1;
        }
    }

}
int main()
{
    lli n;
    cin>>n;
    primefactors(n);
    map<int,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();++it)
    {
        cout<<it->first<<' ' <<it->second<<'\n';
    }
}
