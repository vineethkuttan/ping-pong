/*
 Minimum operations to make GCD of array a multiple of k
Input : a = { 4, 5, 6 }, k = 5
Output: 2
Explanation: We can increase 4 by 1 so that it becomes 5 and decrease 6 by 1 so that it becomes 5.
 Hence minimum operation will be 2.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k,a,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    for(int i=0;i<n;i++)
    {
        a=arr[i];
        if(a%k!=0)
        {
            int ii=a/k;
            int m1,m2;
            m1=abs(a-(k*ii));
            m2=abs(a-(k*(ii+1)));
            //cout<<m1<<' '<<m2<<endl;
            c+=min(m1,m2);
        }
    }
    cout<<c;
}
