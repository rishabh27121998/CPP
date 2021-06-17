/*
//PROBLEM
        MERGE SORT ALGORITHM IMPLEMENTATION
        
Merge sort is an efficient sorting algorithm that produces a stable sort, which 
means that if two elements have the same value, they hold the same relative 
position in the sorted sequence as they did in the input. In other words, the
relative order of elements with equal values is preserved in the sorted 
sequence. Merge sort is a comparison sort, which means that it can sort any 
input for which a less-than relation is defined.
*/
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[q+j+1];
    }
    int i=0;
    int j=0;
    int k=p;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int p,int r)
{
    if(p>=r)
    {
        return;
    }
    int q=p+(r-p)/2;
    mergesort(arr,p,q);
    mergesort(arr,q+1,r);
    merge(arr,p,q,r);
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
    int arr[]={12,11,13,5,6,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
      cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergesort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}