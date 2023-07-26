/*
Input N:
Output:
1
2 4
3 6 9
4 8 1 2 1 6
5 10 15 20 2 5
*/

#include<iostream>
using namespace std;

int main()
{
	int N;
	cout<<"Enter the number: "<<endl;
	cin>>N;
	cout<<"Patter: "<<endl;
	for(int i=1; i<=N; i++)
	{
		for(int j=i; j<=(i*i); j+=i)
		{
			cout<<j<<" ";
		}
		cout<< endl;
	}
	return 0;
}