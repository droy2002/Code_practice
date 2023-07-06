/*	
	1
	1 1
	1 2 1
	1 3 3 1
	1 4 6 4 1
*/

#include<iostream>
using namespace std;

int main()
{
	int row;
	cout<<"Enter the number of row: ";
	cin>> row;
	for(int i=0;i<row;i++)
	{
		int num=1;
		for(int j=0;j<i;j++)
		{
			cout<<num <<" ";
			num= num * (i-j)/(j+1);
		}
		cout<<num;
		cout<<endl;
	}
	
	return 0;
	
}
