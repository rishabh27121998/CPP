/*
PROBLEM
        PARTIOTN AN ARRAY INTO TWO SUBARRAYS WITH THE SAME SUM

Given an integer array, partition it into two subarrays having 
the same sum of elements.
For example-:
INPUT-: {6,-4,-3,2,3}
OUTPUT-: The two subarrays are {6,-4} and {-3,2,3} having equal sum of 2
*/

//SOLUTION

#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int n)
{
    int total=accumulate(arr,arr+n,0);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum==(total-arr[i]))
        {
            return i;
        }
        sum+=arr[i];
    }
}
int main()
{
    int arr[]={6,-4,-3,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    // get index `i` that points to the starting of the second subarray
    int i = partition(arr, n);
 
    if (i != -1)
    {
        // print the first subarray, `arr[0, i-1]`
        copy(arr, arr + i, ostream_iterator<int>(cout, " "));
 
        cout << endl;
 
        // print the second subarray, `arr[i, n-1]`
        copy(arr + i, arr + n, ostream_iterator<int>(cout, " "));
    }
    else {
        cout << "The array can't be partitioned";
    }
 
    return 0;
}