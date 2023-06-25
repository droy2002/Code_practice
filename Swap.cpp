//C++ Program to Swap Two Numbers

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout<<"Enter the 1st number: "<<endl;
    cin>> num1;
    cout<<"Enter the 2nd number: "<<endl;
    cin>> num2;
    temp= num1;
    num1= num2;
    num2= temp;
    cout<<"After swapping 1st number is: "<<num1<<endl;
    cout<<"After swapping 2nd number is: "<<num2<<endl;
    return 0;

}
