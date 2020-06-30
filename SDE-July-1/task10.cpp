/*
Problem-10
Little Praneet loves experimenting with algorithms and has devised a new algorithm. The algorithm is performed on an integer as follows:
    • if the rearmost digit is 0, he will erase it.
    • else, he will replace the rearmost digit dd with d−1.
If a point comes when the integer becomes 00, the algorithm stops.
You are given an integer n. Praneet will perform the algorithm on it aa times. You have to print the result after aa operations.
Input:
    • The first and only line of input contains two integers n — initial number, and a —the number of operations.
Output:
    • Print one integer — the result of performing the algorithm on nn aa times.
Constraints
    • 2≤n≤10^9
    • 1≤a≤50
Sample Input 1
1001 2
Sample Input 2
5 2
Sample Output 1
100
Sample Output 2
3
Explanation
    • In the first example, the transformation is as follows: 1001−>1000−>100.
    • In the second example, the transformation is as follows: 5−>4−>3.
*/
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int a;
    cin>>s>>a;
    int n=s.length();
    int k=stoi(s);
    vector<int> v;
    vector<int> :: reverse_iterator it;
    for(int i=0;i<n;i++)
    {
        v.push_back(k%10);
        k/=10;
    }
    /*for(it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;*/
    while(a>0)
    {
        if(v[0]==0)
            v.erase(v.begin());
        else
        {
            v[0]=v[0]-1;
        }
        a--;
    }
    /*for(it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;*/
    string ans;
    for(it=v.rbegin();it!=v.rend();it++)
    {
        ans=ans+to_string(*it);
    }
    cout<<ans<<endl;
}