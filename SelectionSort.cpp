/*
//PROBLEM
        SELECTION SORT ALGORITHM
        
Selection sort is an unstable, in-place sorting algorithm known for its simplicity.
It has performance advantages over more complicated algorithm in certain situations,
particularly where the auxiliary memory is limited. It can be implemented as a stable 
sort and requires O(n2) time to sort n items, making it inefficient to use on large 
lists. Among simple average-case O(n2) algorithms, selection sort almost outperforms 
bubble sort and generally performs worse than the insertion sort.
*/
//SOLUTION
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr,i,min);
    }
}
int main()
{
    int arr[]={3,5,8,4,1,9,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}