/*
k-th prime factor of a given number
Given two numbers n and k, print k-th prime factor among all prime factors of n. 
For example, if the input number is 15 and k is 2, then output should be “5”. 
And if the k is 3, then output should be “-1” (there are less than k prime factors).
Input : n = 225, k = 2        
Output : 3
Prime factors are 3 3 5 5. Second
prime factor is 3.
*/
#include<iostream>
#include<vector>
#include<cmath>
#define lli long long int
using namespace std;
vector<int> v;
void primefactors(lli n)
{
    while(n%2==0)
    {
        v.push_back(2);
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
            v.push_back(i);
            n=n/i;
        }
        if(n==1)
            break;
    }
    if(n>2)
    {
        v.push_back(n);
    }

}
int main()
{
    lli n,k;
    cin>>n;
    cin>>k;
    primefactors(n);
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;*/
    if(k-1<v.size())    
    {
        cout<<v[k-1]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}
