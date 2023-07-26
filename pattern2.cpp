/*
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7
1 2 3 4 5
1 2 3
1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of line for pattern: "<<endl;
    cin>> n;
    cout<<"Pattern: "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(i*2 - 1); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=(i*2 - 1); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}