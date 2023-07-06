#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void arr_arrange(vector<int> &a)
{
	int j=0;
	for(int i=0; i<a.size();i++)
	{
		if(a[i]<0)
		{
			if(i!=j)
			{
				swap(a[i], a[j]);
			}
			j++;
		}
	}
}

void display(vector<int> &a)
{
	for(int i=0; i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	vector<int> arr;
	int element, size;
	cout<<"Enter the size of the array: ";
	cin>> size;
	cout<<"Enter the elements of the array :"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>> element;
		arr.push_back(element);
	}
	cout<<"Display the elements: ";
	display(arr);
	arr_arrange(arr);
	cout<<"After arranging the array: ";
	display(arr);
	
	return 0;
}
