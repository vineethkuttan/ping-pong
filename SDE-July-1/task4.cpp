/*
Problem-4
Print unique rows in a given boolean matrix
Given a binary matrix, print all unique rows of the given matrix.
Example:
Input:
        {0, 1, 0, 0, 1}
        {1, 0, 1, 1, 0}
        {0, 1, 0, 0, 1}
        {1, 1, 1, 0, 0}
Output:
    0 1 0 0 1 
    1 0 1 1 0 
    1 1 1 0 0 
Explanation: 
The rows are r1={0, 1, 0, 0, 1}, 
r2={1, 0, 1, 1, 0}, r3={0, 1, 0, 0, 1}, 
r4={1, 1, 1, 0, 0}, As r1 = r3, remove r3
and print the other rows.

Input:
        {0, 1, 0}
        {1, 0, 1}
        {0, 1, 0}
Output:
   0 1 0
   1 0 1
Explanation: 
The rows are r1={0, 1, 0}, 
r2={1, 0, 1}, r3={0, 1, 0} As r1 = r3,
remove r3 and print the other rows.
*/
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    set<vector<int>> s;
    int n,k,dif;
    cin>>n;
    vector<int> v[n];
    vector<int> ::iterator it;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>k;
            v[i].push_back(k);
        }
    }
    for(int i=0;i<n;i++)
    {
        dif=s.size();
        s.insert(v[i]);
        if(s.size()>dif)
        {
            for(it=v[i].begin();it!=v[i].end();it++)
            {
                cout<<*it<<' ';
            }
            cout<<endl;
        }
    }
}