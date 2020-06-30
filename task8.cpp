/*
Problem-8
Ish and Govi are playing with strings. In this game Ish gives Govi two strings, aa and bb. Govi has to modify the string aa, such that it doesnot contain any character from string bb. Govi has to go to meet Omi. Help Govi to modify the string aa.
Input:
    • First line will contain TT, number of testcases. Then the testcases follow.
    • Each testcase contains two lines representing string aa and bb respectively.
Output:
For each testcase, output in a single line answer, the modified string aa such that it doesnot contain any character from string bb.
Constraints
    • 1≤T≤100
    • 1≤a≤10^5
    • 1≤b≤10^5
    • Both string are of Uppercase English Alphabets
Sample Input:
 1
 IKAIPOCHE
 ISH
Sample Output:
 KAPOCE

*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s1,s2,ans;
    cin>>s1>>s2;
    vector<string> v1,v2;
    vector<string> :: iterator it;
    for(int i=0;i<s1.length();i++)
    {
        if(s2.find(s1[i])==string::npos)
            ans=ans+s1[i];
    }
    cout<<ans<<endl;
}