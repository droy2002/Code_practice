#include<iostream>
#include<vector>
using namespace std;

void set_zero(vector<vector<int>> &a)
{
	int rowno= a.size();
	int colno= a[0].size();
	vector<bool> markRow(rowno, false);
	vector<bool> markCol(colno, false);	
	
	//traverse the entire matrix to find the 0 and mark the corresponding row and col
	for(int i=0; i<rowno;i++)
	{
		for(int j=0; j<colno; j++)
		{
			if(a[i][j]==0)
			{
				markRow[i]= true;
				markCol[j]=true;
			}
		}
	}
	
	//set entire rows as 0
	for(int i=0; i<rowno;i++)
	{
		if(markRow[i])
		{
			for (int j = 0; j < colno; j++) 
			{
                			a[i][j] = 0;
            		}
		}
	}
	
	//set entire columns as 0
	for(int j=0; j<colmno;j++)
	{
		if(markCol[j])
		{
			for (int i = 0; i < rowno; i++) 
			{
                			a[i][j] = 0;
            		}
		}
	}
}

void display(vector<vector<int>> &a)
{
	int rowno= a.size();
	int colno= a[0].size();
	
	for(int i=0;i<rowno;i++)
	{
		for(int j=0; j<colno;j++)
		{
			cout<< a[i][j]<<" ";l
		}
		cout<<endl;
	}
}

int main()
{
	vector<vector<int>> matrix = {{1,1,1}, {1,0,1},{1,1,1}};
	cout<<"Display the matrix : "<<endl;
	display(matrix);
	set_zero(matrix);
	cout<<"Display the modified matrix : "<<endl;
	display(matrix);
	
	return 0;
}
