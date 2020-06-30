/*
Problem-7
The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.
The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.
The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner. In his version, at the end of each round the leader and her current lead are calculated. Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.
Consider the following score sheet for a game with 55 rounds:
Round     Player 1       Player 2

  1         140             82
  2          89            134 
  3          90            110 
  4         112            106
  5          88             90 
The total scores of both players, the leader and the lead after each round for this game is given below:
Round      Player 1       Player 2     Leader     Lead

  1          140             82       Player 1     58
  2          229            216       Player 1     13
  3          319            326       Player 2      7
  4          431            432       Player 2      1
  5          519            522       Player 2      3
The winner of this game is Player 11 as he had the maximum lead (5858 at the end of round 11) during the game.
Your task is to help the Manager find the winner and the winning lead. You may assume that the scores will be such that there will always be a single winner. That is, there are no ties.
Input:
The first line of the input will contain a single integer N (N≤10000N≤10000) indicating the number of rounds in the game. Lines 2,3,...,N+12,3,...,N+1 describe the scores of the two players in the NN rounds. Line i+1i+1 contains two integer SiSi and TiTi, the scores of the Player 11 and 22 respectively, in round ii.
Output:
Your output must consist of a single line containing two integers WW and LL, where WW is 11 or 22 and indicates the winner and LL is the maximum lead attained by the winner.
Constraints:
    • 50%50% of test data satisfy N≤1000N≤1000.
    • 1≤N≤100001≤N≤10000
    • 1≤Si≤10001≤Si≤1000
    • 1≤Ti≤10001≤Ti≤1000
Sample input:
5
140 82
89 134
90 110
112 106
88 90
Sample output:
1 58
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b;
    int dif=-1,pla,tdif;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        tdif=abs(a-b);
        if(tdif>dif)
        {
            dif=tdif;
            if(a>b)
                pla=1;
            else
                pla=2;
        }
    }
    cout<<pla<<' '<<dif<<endl;
}