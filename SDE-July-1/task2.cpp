/*
Problem-2
Find k most frequent in linear time
Given an array of integers, we need to print k most frequent elements. 
If there is a tie, we need to prefer the elements whose first appearance is first.
Examples:
Input : arr[] = {10, 5, 20, 5, 10, 10, 30}, k = 2
Output : 10 5
Input : arr[] = {7, 7, 6, 6, 6, 7, 5, 4, 4, 10, 5}, k = 3
Output : 7 6 5
Explanation :
In this example, 7 and 6 have same frequencies. We print 7 first because first 
appearance of 7 is first. Similarly, 5 and 4 have same frequencies.
 We prefer 5 because 5’s first appearance is first.
Input: arr[]={ 3, 1, 4, 4, 5, 2, 6, 1 }; 
Output: 1 4 3
*/
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n,k,ma;
    cin>>n;
    vector<int> v1;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(mp.find(k)==mp.end())
        {
            mp[k]=1;
            v1.push_back(k);
        }
        else
        {
            mp[k]+=1;
        }
    }
    cin>>ma;
    vector<int> :: iterator it;
    for(it=v1.begin();it!=v1.end();++it)
    {
        if(mp[*it]==ma)
            cout<<*it<<' ';
    }
    cout<<ma<<endl;
}