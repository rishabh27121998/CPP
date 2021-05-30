/*PROBLEM
        FIND THE MINIMUM INDEX OF A REPEATING ELEMENT IN AN ARRAY 
        
Given an integer array, find the minimum index of a repeating element in 
linear time and doing jut a single traversal of the array.
For Example-:
INPUT: {5,6,3,4,3,6,4}
OUTPUT: The minimum index of the repeating element is 1 
*/

//SOLUTION
//BRUTE-FORCE APPROACH
/*
#include <iostream>
using namespace std;


int findMinIndex(int arr[], int n)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// if the element is seen before, return its index
			if (arr[j] == arr[i]) {
				return i;
			}
		}
	}

	// invalid input
	return n;
}

int main()
{
	int arr[] = { 5, 6, 3, 4, 3, 6, 4 };
	// int arr[] = { 1, 2, 3, 4, 5, 6 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int minIndex = findMinIndex(arr, n);

	if (minIndex != n) {
		cout << "The minimum index of repeating element is " << minIndex << endl;
	}
	else {
		cout << "Invalid Input";
	}

	return 0;
}*/

//SOLUTION
//(2)HASHING
#include<bits/stdc++.h>
using namespace std;
int findMinIndex(int arr[],int n)
{
    int minidx=0;
    unordered_set<int> set;
    //traverse the array from right to left coz we want the minimum index
    for(int i=n-1;i>=0;i--)
    {
        if(set.find(arr[i])!=set.end())
        {
            minidx=i;
        }
        set.insert(arr[i]);
    }
    return minidx;
}
int main()
{
    int arr[] = { 5, 6, 3, 4, 3, 6, 4 };
    // int arr[] = { 1, 2, 3, 4, 5, 6 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}


    