/*
PROBLEM
        FIND THE MIN. DIFFERENCE BETWEEN THE INDEX OF TWO GIVEN ELEMENTS PRESENT
                IN THE ARRAY

Given two integeres, find the minimum difference between their index in a given
array in linear time and a single traversal of the array.
For Example-:

INPUT: arr={1,3,5,4,8,2,4,3,6,5]
x=3, y=2

OUTPUT-: Minimum difference between index is 2
*/

//SOLUTION
#include<bits/stdc++.h>
using namespace std;
int min(int x,int y)
{
    return (x<y)?x:y;
}
int findMinDifference(int arr[],int n,int x,int y)
{
    int diff=INT_MAX;
    int x_idx=n,y_idx=n;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            x_idx=i;
            if(y_idx!=n)
            {
                diff=min(diff,abs(x_idx-y_idx));
            }
        }
        if(arr[i]==y)
        {
            y_idx=i;
            if(x_idx!=n)
            {
                diff=min(diff,abs(x_idx-y_idx));
            }
        }
    }
    return diff;
}
int main()
{
    int arr[] = { 1, 3, 5, 4, 8, 2, 4, 3, 6, 5 };
    int x = 2, y = 5;
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = findMinDifference(arr, n, x, y);
 
    if (diff != INT_MAX) {
        printf("The minimum difference is %d", diff);
    }
    else {
        printf("Invalid input");
    }
}