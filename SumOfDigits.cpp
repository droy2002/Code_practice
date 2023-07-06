#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	int size;
	cout<<"Enter the number of element :"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cout<< "Enter the "<< i <<"th element : ";
		cin>>arr[i];
	}
	cout<<"Display the elements : "<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<size;i++)
	{
		sum= sum+arr[i];
	}
	cout<<"Sum of the digits : "<<sum;
	
	return 0;
}
