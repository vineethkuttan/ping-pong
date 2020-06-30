/*
Problem-6
In this problem the input will consist of a number of lines of English text consisting of the letters of the English alphabet, the punctuation marks ' (apostrophe), . (full stop), , (comma), ; (semicolon), :(colon) and white space characters (blank, newline). Your task is print the words in the text in reverse order without any punctuation marks.
For example consider the following candidate for the input text:
  This is a sample piece of text to illustrate this 
  problem.  If you are smart you will solve this right.
The corresponding output would read as:
  right this solve will you smart are you If problem
  this illustrate to text of piece sample a is This
That is, the lines are printed in reverse order and in each line the words are printed in reverse order.
Input:
The first line of input contains a single integer NN, indicating the number of lines in the input. This is followed by NN lines of input text.
Output:
NN lines of output text containing the input lines in reverse order and where each line contains the words in reverse order as illustrated above.
Constraints:
    • 1≤N≤100001≤N≤10000.
    • There are at most 8080 characters in each line
Sample input
2
This is a sample piece of text to illustrate this 
problem.  If you are smart you will solve this right.
Sample output
right this solve will you smart are you If problem
this illustrate to text of piece sample a is This
*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //cout<<s<<endl;
    istringstream iss(s);
    vector<string> v;
    vector<string> :: reverse_iterator it;
    do
    {
        string subs;
        iss>>subs;
        v.push_back(subs);
    } while (iss);
    for(it=v.rbegin();it!=v.rend();it++)
    {
        cout<<*it<<' ';
    }
    
}