/*
Input: N = 5
arr = {1, 2, 3, 2, 1}
Output: 3
Explaination: Only the number 3 is single.
*/

#include<bits/stdc++.h>
using namespace std;

int find_unique(int a[], int n)
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        s= s^a[i];
    }
    return s;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>> size;
    int arr[size];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Single person in the party of couple: "<<find_unique(arr,size);

    return 0;
}