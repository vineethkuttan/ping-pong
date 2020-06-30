/*Problem-3
Write an efficient program to find the sum of contiguous subarray within 
a one-dimensional array of numbers which has the largest sum.*/
#include<iostream>
using namespace std;
int max(int a, int b)
{
	return a > b ? a : b;
}
int max_subarray(int a[], int size) 
{ 
    int max_so_far =-9999, max_ending_here = 0,i;
    for(i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
int main()
{
    int n;
    cin>>n;
	int array[n]; //= {-2,-3, 4, -1,-2, 1, 5,-3};
    for(int i=0;i<n;i++)
        cin>>array[i];
	//int n = sizeof(array)/sizeof(array[0]);
	printf("Max subarray sum is %d\n", max_subarray(array, n));
	return 0;
}