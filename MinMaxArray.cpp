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

void sort(int a[], int n)	// insertion sort
{
	for(int i = 1; i < n; i++)	// unsorted sublist
	{
		int j = i - 1;	// index of sorted sublist
		int temp = a[i];
		while(j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}

int main()
{
	int size;
	cout<<"Enter the size of the array : ";
	cin>> size;
	int arr[size];
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>> arr[i];
	}
	display(arr, size);
	sort(arr, size);
	cout<<"After sorting the array: "<<endl;
	display(arr, size);
	cout<<"Maximum of the array is: "<< arr[size -1]<<endl;
	cout<<"Minimum of the array is: "<<arr[0]<<endl;
	
	return 0;
}
