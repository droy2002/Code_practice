/*
Input N: 5 
Output:
1 
1 1 
1 0 1 
1 0 0 1 
1 1 1 1 1
*/
#include<iostream>
using namespace std;
int main()
{
    int n, i,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==1 || i==n ||j==1 ||j==i)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}