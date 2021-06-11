/*
//PROBLEM
        BUBBLE SORT - ITERATIVE & RECURSIVE
        
It is a stable, in-place algorithm named for smaller or larger elements "bubble"
to the top of the list. Altough the algorithm is simple, it is too slow and 
impractical for most problems even compared to insertion sort, and is not
recommended for large input.
The only significant advantage that buuble sort has over nost other 
implementations, even Quicksort, but not insertion sort, is the ability to 
detect if the list is already sorted. When the list is already sorted (best-case),
bubble sort runs in linear time. 

HOW IT WORKS
Each pass of bubble sort steps through the list to be sorted compares each pair
of adjacent items and swaps them if they are in the wrong order. At the end of 
each pass, the next largest will 'Bubble' up to its correct position.
We can optimized the bubble sort by using flag.
this flag break when there is no swap takes place in the current pass.
*/
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n)
{
    for(int k=0;k<n-1;k++)
    {
        int flag=0;
        for(int i=0;i<n-k-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr,i,i+1);
                flag=1;
            }
        }
        if(flag==0) break;
    }
}
int main(void)
{
    int arr[] = { 3, 5, 8, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    bubbleSort(arr, n);
    printArray(arr, n);
 
    return 0;
}