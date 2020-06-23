#include<iostream>
//#include<cstring> for memset
using namespace std;
bool findunassigned(int arr[9][9],int &row,int &col)
{
    for(row=0;row<9;row++)
        for(col=0;col<9;col++)
            if(arr[row][col]==0)
                return true;
    return false;
}
bool issafe(int arr[9][9],int n,int row,int col)
{
    if(arr[row][col])
        return false;
    for(int i=0;i<9;i++)
    {
        if(arr[row][i]==n)
            return false;
    }
    for(int i=0;i<9;i++)
    {
        if(arr[i][col]==n)
            return false;
    }
    int StartRow=row-row%3;
    int StartCol=col-col%3;
    for (int i = 0;i < 3; i++) 
		for (int j = 0; j < 3; j++) 
			if (arr[i + StartRow][j + StartCol]== n) 
				return false;
    return true;
}
void display(int arr[9][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool sudoku(int arr[9][9])
{
    int row,col;
    if(!findunassigned(arr,row,col))
        return true;
    for(int n=1;n<=9;n++)
    {
        if(issafe(arr,n,row,col))
        {
            arr[row][col]=n;
            if(sudoku(arr))
                return true;
            arr[row][col]=0;
        }
        
    }
    return false;
}
int main()
{
    int arr[9][9]={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 }, 
					{ 5, 2, 0, 0, 0, 0, 0, 0, 0 }, 
					{ 0, 8, 7, 0, 0, 0, 0, 3, 1 }, 
					{ 0, 0, 3, 0, 1, 0, 0, 8, 0 }, 
					{ 9, 0, 0, 8, 6, 3, 0, 0, 5 }, 
					{ 0, 5, 0, 0, 9, 0, 6, 0, 0 }, 
					{ 1, 3, 0, 0, 0, 0, 2, 5, 0 }, 
					{ 0, 0, 0, 0, 0, 0, 0, 7, 4 }, 
					{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } }; 
    /*memset(arr,0,sizeof(arr));
    display(arr);
    int i,j,k,f=1;
    cout<<"Enter the partially filled sudoku grid "<<endl;
    cout<<"Enter the row and column and then the number\n";
    while(f)
    {
        cin>>i>>j>>k;
        arr[i-1][j-1]=k;
        cout<<"Enter 1 to add the next cell or Enter 0";
        cin>>f;
    }*/
    display(arr);
    cout<<"\n\n\nThe answer is\n";
    if(sudoku(arr))
    {
        display(arr);
    }
    else
    {
        cout<<"Nothing"<<endl;
    }
    
}
