#include<iostream>
#include<vector>
using namespace std;

void rotated(int a[], int n)
{
    vector<int> v;
    v.push_back(a[n-1]);
    for(int i=0; i<n-1; i++)
    {
        v.push_back(a[i]);
    }
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>> arr[i];
    }
    cout<<"Display the array elements: ";
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After rotated array elements: ";
    rotated(arr, size);

    return 0;
}