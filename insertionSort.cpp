/*
//PROBLEM
        INSERTION SORT ALGORITHM - ITERATIVE & RECURSIVE
        
It is a stable, in-place sorting algorithm that builds the final sorted array one
item at a time. It is not the very best in terms of performance but more 
efficient traditionally than most other simple O(n2) algorithms such as 
selection sort and bubble sort. Insertion sort is also used in Hybrid sort, 
which combines different sorting algorithms to improve performance. 
*/
//SOLUTION
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int i=j-1;
        while(i>0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
int main(void)
{
    int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
 
    // print the sorted array
    printArray(arr, n);
 
    return 0;
}