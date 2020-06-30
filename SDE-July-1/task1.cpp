/*
Problem-1
There are n children in a school with their roll numbers from 1 to n. 
Each of those children has x number of storybooks and y number of toys. 
Now the school admin has decided to give toy cars to these children but due to a s
hortage of toy cars, the school has decided to arrange the children in a specific order
    1. Children with fewer toys are preferred first.
    2. In case the children have the same number of toys, children with 
    more number of storybooks will get their chances first.
    3. In case the children have the same number of toys and the
     same number of storybooks, children with higher roll number will get their chances first
Your task is to find out the order of the children based on which they are going to receive their toys.
Input:
    • First line will contain N, number of children.
    • Each of the following N lines contains two integers X,Y.
     The roll number of the children is the corresponding line number.
Output:
In a single line print N space-separated roll numbers of the children 
in the order in which they are going to get their toys.
Constraints
    • 1≤N≤4∗1051≤N≤4∗105
    • 2≤X,Y≤1002≤X,Y≤100
Sample Input:
5
56 43
8 27
32 27
32 27
35 24
Sample Output:
 5 4 3 2 1 

*/


#include<bits/stdc++.h>
using namespace std;
long long MOD = 1e9+7;
struct child 
{
    int storybooks, toys, rollNum;
};
bool cmp(child c1, child c2) 
{
    if(c1.toys == c2.toys) 
	{
        if(c1.storybooks == c2.storybooks)
            return c1.rollNum > c2.rollNum;
        return c1.storybooks > c2.storybooks;
    }
    return c1.toys < c2.toys;
}
int main() 
{
    int t;
    int n;
    cin>>n;
    vector<child> children(n);
        for(int i=0;i<n;i++) 
		{
            cin>>children[i].storybooks>>children[i].toys;
            children[i].rollNum = i+1;
        }
        sort(children.begin(),children.end(),cmp);
        for(int i=0;i<n;i++)
            cout<<children[i].rollNum<<" ";
    return 0;
}