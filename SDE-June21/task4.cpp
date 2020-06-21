/*
Count number of pairs (A <= N, B <= N) such that gcd (A , B) is B
Given a number n. We need find the number of 
ordered pairs of a and b such gcd(a, b) is b itself
Input : n = 2
Output : 3
(1, 1) (2, 2) and (2, 1)
*/
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(gcd(i,j)==j)
                c+=1;
        }
    }
    cout<<c<<endl;
}
