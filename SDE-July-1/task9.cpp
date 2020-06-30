/*
Problem-9
One of the things JEC is known for is its GR (Group Recreation) where juniors and seniors do friendly interaction ;P
As for the new session of 2020 seniors decided to have their first GR and give them some treat. Juniors were excited about it they came to college canteen aligned in a line and counted themselves one by one from left to right so that every junior gets his/her treat. But seniors played a game and they will treat only the ones who passes in this game. Game is simple all they need to do is to alternate their language (between Hindi and English) while telling their positions that is if the junior just before you told 2 in English you need to say 3 in Hindi . You do not want to be the one left without a treat.
You are the junior standing at position XX from left and the counting could start from left or right you have to predict which number you have to speak and in which language when your turn comes.
Input:
    • First line will contain TT, number of testcases. Then the testcases follow.
    • Each testcase contains 2 lines first consist 2 space separated integers, NN (total count) , XX (your position from left), next line consist of 2 space separated characters L or R (Direction from which counting starts L-left, R-Right) and H or E (the language to start counting).
Output:
For each testcase, output a single line consisting space seperated Integer P and Character L where P is the number you will speak and L is the language (H or E).
Constraints
    • 1≤T≤1000
    • 1≤N≤120
    • 1≤X≤N
Sample Input:
2
15 5
L H
20 14
R E
*try to trim extra white spaces like new line during input in case of wrong answer
Sample Output:
5 H
7 E
EXPLANATION:
    1. When counting starts from left with H it alternates like H E H E H….. on the fifth position H comes
    2. When Count starts from right with E it alternates like E H E H E H E….. with E on the position of 14th student from right.

*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<char,char> mp;
    mp['H']='E';
    mp['E']='H';
    for(int t1=0;t1<t;t1++)
    {
        int n,p;
        cin>>n>>p;
        char s,l;
        cin>>s>>l;
        if(s=='L')
        {
            if(p&1)
            {
                cout<<p<<' '<<l<<endl;
            }
            else
            {
                cout<<p<<' '<<mp[l]<<endl;
            }
        }
        else
        {
            p=n-p+1;
            if(p&1)
            {
                cout<<p<<' '<<l<<endl;
            }
            else
            {
                cout<<p<<' '<<mp[l]<<endl;
            }
        }
    }
}