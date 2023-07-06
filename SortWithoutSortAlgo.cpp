#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a)
{
	cout<<"Display the elements : ";
	for(int i=0; i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

vector<int> arr_sort(vector<int> &a, int a_size)
{
	int low=0;
	int mid=0;
	int high= a_size-1;
	
	while(mid<=high)
	{
		if(a[mid]==0)
		{
			swap(a[low], a[mid]);
			low++;
			mid++;
		}
		else if (a[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(a[mid], a[high]);
			high--;	
		}
	}
	return a;
}
int main()
{
	vector<int> arr;
	int element, size;
	cout<<"Enter the size of the vector : ";
	cin>> size;
	cout<<"Enter the elements : "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>element;
		arr.push_back(element);
	}
	display(arr);
	vector<int> sorted_arr= arr_sort(arr, size);
	cout<<"Sorted array : "<<endl;
	display(sorted_arr);
	
	return 0;
}
