#include<iostream>
#include<vector>
using namespace std;

int find(int n1, int n2)
{
    int count = 0;
    for(int i=n1; i<=n2; i++)
    {
        int num = i;
        vector<bool> visitd(10, false);
        while(num > 0)
        {
            if(visitd[num % 10] == true)
            {
                break;
            }
            visitd[num % 10] =true;
            num /= 10;
        }

        if(num == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n1, n2;
    cout<<"Enter the first element : ";
    cin>> n1;
    cout<<"Enter the last element : ";
    cin>> n2;
    int count= find(n1, n2);
    cout<<"Total number of no rpeated  digits between "<<n1<<" and "<<n2<<" = "<<count;

    return 0;
}