//C++ Program to Add Two Numbers

#include <iostream>
using namespace std;

int main() {

    int first_number, second_number, sum; 

    //take number from users as input
    cout <<"Additon of two number"<<endl;
    cout << "Enter first number: "<<endl;
    cin >> first_number;
    cout << "Enter second number: "<<endl;
    cin >> second_number;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sum = first_number + second_number;

    // prints sum 
    cout <<"Sum of two numbers are: "<<endl;
    cout << first_number << " + " <<  second_number << " = " << sum;     

    return 0;
}