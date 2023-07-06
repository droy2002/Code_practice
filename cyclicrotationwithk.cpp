#include<iostream>
#include<vector>
using namespace std;

vector<int> rotated(int a[], int n, int k)
{
    if(k>n)
    {
        k = k % n; //if pos of rotation is this then modifie this into the range of original arr size
    }
    vector<int> rotated_array(n); //create a new vector same size of original array

    for(int i=0; i<k; i++)  // from 0 to k-1 is used to assign the last k elements of the original array to the first k elements of the vector.
    {
        rotated_array[i]= a[n-k+i];
    }
    int index=0;
    for(int i=k; i<n; i++) //from k to n-1 is used to assign the remaining elements of the original array to the vector starting from index 0
    {
        rotated_array[i]= a[index++];
    }

    return rotated_array;
}

int main()
{
    int size, pos;
    cout<<"Enter the size of the array : ";
    cin>> size;
    int arr[size];
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>  arr[i];
    }
    cout<<"Enter a number of positions to rotate : ";
    cin>> pos;
    vector<int> newArray =rotated(arr,size, pos);
    cout<<"After rotation array elements : ";
    for(int i=0; i<size; i++)
    {
        cout<< newArray[i]<<" ";
    }

    return 0;
}
