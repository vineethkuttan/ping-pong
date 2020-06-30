/*
As we all know, a palindrome is a word that equals its reverse. Here are some examples of palindromes: malayalam, gag, appa, amma.
We consider any sequence consisting of the letters of the English alphabet to be a word. So axxb,abbba and bbbccddx are words for our purpose. And aaabbaaa, abbba and bbb are examples of palindromes.
By a subword of a word, we mean a contiguous subsequence of the word. For example the subwords of the word abbba are a, b, ab, bb, ba, abb, bbb, bba, abbb, bbba and abbba.
In this task you will given a word and you must find the longest subword of this word that is also a palindrome.
For example if the given word is abbba then the answer is abbba. If the given word is abcbcabbacba then the answer is bcabbacb.
Input:
The first line of the input contains a single integer N indicating the length of the word. The following line contains a single word of length N, made up of the letters a,b,…, z.
Output:
The first line of the output must contain a single integer indicating the length of the longest subword of the given word that is a palindrome. The second line must contain a subword that is a palindrome and which of maximum length. If there is more than one subword palindrome of maximum length, it suffices to print out any one.
Constraints:
    • 1≤N≤5000.
    • You may assume that in 30% of the inputs 1≤N≤300.
Sample Input 1:
5
abbba
Sample Output 1:
5
abbba
Sample Input 2:
12
abcbcabbacba
Sample Output 2:
8
bcabbacb
*/

#include <bits/stdc++.h> 
using namespace std; 

void printSubStr( 
	string str, int low, int high) 
{ 
	for (int i = low; i <= high; ++i) 
		cout << str[i]; 
} 

int longestPalSubstr(string str) 
{ 
	int n = str.size(); 

	bool table[n][n]; 

	memset(table, 0, sizeof(table)); 

	int maxLength = 1; 

	for (int i = 0; i < n; ++i) 
		table[i][i] = true; 

	int start = 0; 
	for (int i = 0; i < n - 1; ++i) { 
		if (str[i] == str[i + 1]) { 
			table[i][i + 1] = true; 
			start = i; 
			maxLength = 2; 
		} 
	} 

	for (int k = 3; k <= n; ++k) { 
	
		for (int i = 0; i < n - k + 1; ++i) { 
			
			int j = i + k - 1; 

			if (table[i + 1][j - 1] && str[i] == str[j]) { 
				table[i][j] = true; 

				if (k > maxLength) { 
					start = i; 
					maxLength = k; 
				} 
			} 
		} 
	} 

	cout << "Longest palindrome substring is: "; 
	printSubStr(str, start, start + maxLength - 1); 

	return maxLength; 
} 

int main() 
{ 
	string str = "forgeeksskeegfor"; 
	cout << "\nLength is: "
		<< longestPalSubstr(str); 
	return 0; 
} 
