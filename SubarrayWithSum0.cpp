#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>s;
        
        int prefix_sum=0;
        for(int i=0;i<n;i++)
        {
            prefix_sum+=arr[i];
            if(prefix_sum==0)
            {
                return true;
            }
            if(s.find(prefix_sum)!=s.end())
            {
                return true;
            }
            s.insert(prefix_sum);
        }
            
        return false;
    }

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements : ";
    for(int i=0; i<size; i++)
    {
        cin>> arr[i];
    }
    cout<<"find if there is any subarray with sum = 0 !" <<endl;
    cout<< subArrayExists(arr, size);

    return 0;
}