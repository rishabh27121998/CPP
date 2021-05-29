/*
//PROBLEM
        FIND EQUILIBRIUM INDEX OF AN ARRAY
Given an intger array, find the equilibrium inde in it.
For any array A consisiting n elements, index i is an equilibrium 
index if thesum of elements of subarray A[0...i-1] is equal to the
sum of elements of subarray A[i+1....n-1]. i.e.
(A[0]+A[1]+....+A[i-1])=(A[i+1]+A[i+2]+....+A[n-1]),
where 0<i<n-1

Similarly, 0 is an equilibrium index if A[1]+A[2]+....+A[n-1] sums to 0
and n-1 is an equilibrium index if A[0]+A[1]+....+A[n-2] sums to 0.

To illustrate, consider the array {0,-3,5,-4,-2,3,1,0}. The equilibrium 
index is found at index 0,3 and 7.
*/

//SOLUTION
//(1)LINEAR-TIME SOLUTION
/*#include<bits/stdc++.h>
using namespace std;
void equilibrium(int arr[],int n)
{
    int left[n];
    left[0]=0;
    for(int i=1;i<n;i++)
    {
        left[i]=left[i-1]+arr[i-1];
    }
    int right=0;
    for(int i=n-1;i>=0;i--)
    {
        if(left[i]==right)
        {
            cout<<"Equilibrium Index found at: "<<i<<endl;
        }
        right+=arr[i];
    }
}
int main()
{
    int arr[]={0,-3,5,-4,-2,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    equilibrium(arr,n);
    return 0;
}*/

//SOULTION
//(2) OPTIMIZED SOLUTION
#include<bits/stdc++.h>
using namespace std;
void equilibrium(int arr[],int n)
{
    int total=accumulate(arr,arr+n,0);
    int right=0;
    for(int i=n-1;i>=0;i--)
    {
        if(right==total-(right+arr[i]))
        {
            cout<<"Equilibrium Index found at: "<<i<<endl;
        }
        right+=arr[i];
    }
}
int main()
{
    int arr[]={0,-3,5,-4,-2,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    equilibrium(arr,n);
    return 0;
}