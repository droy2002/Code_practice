#include<iostream>
using namespace std;

void display(int a[], int n)
{
	cout<<"Display the elements of the array :"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<< a[i]<<" ";
	}
	cout<<endl;
}
void rev_array(int a[], int n, int start, int end)
{
	int temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
}

int main()
{
	int size;
	int arr[size];
	cout<<"Enter the size of the array : ";
	cin>> size;
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>> arr[i];
	}
	display(arr, size);
	rev_array(arr, size, 0, size-1);
	cout<<"After reverse the array: "<<endl;
	display(arr, size);
	
	return 0;
}
