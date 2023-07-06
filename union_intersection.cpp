#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    vector<int> unionResult;
    int i = 0, j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Traverse both arrays simultaneously
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionResult.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            unionResult.push_back(arr2[j]);
            j++;
        } else {
            unionResult.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of arr1, if any
    while (i < n1) {
        unionResult.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2, if any
    while (j < n2) {
        unionResult.push_back(arr2[j]);
        j++;
    }

    return unionResult;
}

vector<int> findIntersection(vector<int>& arr1, vector<int>& arr2) {
    vector<int> intersectionResult;
    int i = 0, j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Traverse both arrays simultaneously
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            intersectionResult.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersectionResult;
}

void display(vector<int> &a)
{
	for(int i=0; i<a.size(); i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int size1, size2, element;
	cout<<"Enter the size of 1st array :";
	cin>> size1;
	cout<<"Enter the size of 2nd array :";
	cin>> size2;
	vector<int> arr1;
	cout<<"Enter the element of 1st array :";
	for(int i=0; i<size1; i++)
	{
		cin>>element;
		arr1.push_back(element);
	}
	vector<int> arr2;
	cout<<"Enter the element of 2nd array :";
	for(int i=0; i<size2; i++)
	{
		cin>>element;
		arr2.push_back(element);
	}
	cout<<"Display the 1st array :";
	display(arr1);
	cout<<"Display the 2nd array :";
	display(arr2);
	vector<int> unionResult = findUnion(arr1, arr2);
    	vector<int> intersectionResult = findIntersection(arr1, arr2);
    	cout<<"Display union of two array: ";
    	display(unionResult);
    	cout<<"Display intersection of two array: ";
    	display(intersectionResult);
    	int unionCount = unionResult.size();
    	int intersectionCount = intersectionResult.size();
    	cout << "Number of elements in union: " << unionCount << endl;
    	cout << "Number of elements in intersection: " << intersectionCount << endl;

	return 0;
}
