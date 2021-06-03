/*
//PROBLEM
        LEFT ROTATE AN ARRAY
        
In this post, we will see how to left-rotate an array by specified positions.
For example, left-rotation array {1,2,3,4,5,6} twice result in 
array {3,4,5,6,1,2}
*/
//SOLUTION
#include<bits/stdc++.h>
using namespace std;
void leftRotateByOne(int arr[], int n)
{
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
 
    arr[n-1] = first;
}
 
// Function to left-rotate an array by `r` positions
void leftRotate(int arr[], int r, int n)
{
    for (int i = 0; i < r; i++) {
        leftRotateByOne(arr, n);
    }
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int r = 2;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    leftRotate(arr, r, n);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}