/*
PROBLEM
        DETERMINE THE INDEX OF AN ELEMENT THAT SATISFIES GIVEN CONSTRAINT 
                                    IN AN ARRAY
                        
Given an integer array, determine the index of an element before which all 
elements are smaller and after which all are greater.
For Example:
INPUT: A[]={4,2,3,5,1,6,9,7}
OUTPUT: Index 5

All elements before index 5 are smaller, and all elements 
after index 5 are greater.
*/

//SOLUTION
#include<bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
    return (x>y)?x:y;
}
int min(int x,int y)
{
    return (x<y)?x:y;
}

int findIndex(int arr[],int n)
{
    int left[n];
    left[0]=INT_MIN;
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i-1]);
    }
    int right[n];
    right[n-1]=INT_MAX;
    for(int i=n-2;i>=0;i--)
    {
        right[i]=min(right[i+1],arr[i+1]);
    }
    for(int i=1;i<n-1;i++)
    {
        if(left[i]<arr[i]&&right[i]>arr[i])
        {
            return i;
        }
    }
    return n;
}
int main(void)
{
    int arr[] = { 4, 2, 3, 5, 1, 6, 9, 7 };
    int n = sizeof arr / sizeof arr[0];
 
    int index = findIndex(arr, n);
 
    if (index >= 0 && index < n) {
        printf("The required index is %d", index);
    }
    else {
        printf("Invalid Input");
    }
 
    return 0;
}