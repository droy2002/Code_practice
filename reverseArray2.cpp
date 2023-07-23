#include <iostream>
using namespace std;

void display(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	int size;
	cout<<"Enter the size of the array : ";
	cin>> size;
	int arr[size];
	cout<<"Enter the array element: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Display the array : ";
	display(arr, size);
	cout<<endl;
	cout<<"After reverse array : ";
	for(int i=size-1; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}