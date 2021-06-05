/*
//PROBLEM
        RIGHT ROTATE AN ARRAY 'k' TIMES

In this post, we will see how to right-rotate an array by specified
positions. FOr example, right rotating array {1,2,3,4,5,6,7} three times 
will result in array {5,6,7,1,2,3,4}.
*/

//SOLUTION
#include<bits/stdc++.h>
using namespace std;
void rightRotateByOne(int arr[],int n)
{
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;
}
void rightRotate(int arr[], int k, int n)
{
    for (int i = 0; i < k; i++) {
        rightRotateByOne(arr, n);
    }
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    rightRotate(arr, k, n);
 
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}


