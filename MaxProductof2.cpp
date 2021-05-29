/*
PROBLEM
        FIND THE MAXIMUM PRODUCT 
Given an integer array, find th maximum product of two integers in it.
For example-:
 Consider array {-10,-3,5,6,-2}. The maximum product is the (-10,-3) or (5,6) pair.
*/
//SOLUTION 
//(1)BRUTE FORCE
//Time Complexity O(n^2)

/*#include<bits/stdc++.h>
using namespace std;
void findMaximumProduct(int arr[],int n)
{
    int maxp=INT_MIN;
    int max_i,max_j;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(maxp<arr[i]*arr[j])
            {
                maxp=arr[i]*arr[j];
                max_i=i;
                max_j=j;
            }
        }
    }
    cout<<"Pair is ("<<arr[max_i]<<","<<arr[max_j]<<")";
}
int main()
{
    int arr[] = { -10, -3, 5, 6, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
 
    return 0;
}*/

//SOLUTION
//USING SORTING AND DYNAMIC PROGRAMMING
//Time Complexity O(n*log(n))

/*#include<bits/stdc++.h>
using namespace std;
void findMaximumProduct(int arr[],int n)
{
    vector<int> v(arr,arr+n);
    sort(v.begin(),v.end());
    (v[1]*v[0])>=(v[n-1]*v[n-2])?cout<<"Pair is ("<<v[0]<<","<<v[1]<<")":
    cout<<"Pair is ("<<v[n-2]<<","<<v[n-1]<<")";
}
int main()
{
    int arr[] = { -10, -3, 5, 6, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
 
    return 0;
}*/

//SOLUTION
//LINEAR TIME
#include<bits/stdc++.h>
using namespace std;
void findMaximumProduct(int arr[],int n)
{
    int max1=arr[0],max2=INT_MIN;
    int min1=arr[0],min2=INT_MAX;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
        
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2)
        {
            min2=arr[i];
        }
    }
    
    if(max1*max2>min1*min2)
    {
        cout<<"Pair is ("<<max1<<","<<max2<<")";
    }
    else
    {
        cout<<"Pair is ("<<min1<<","<<min2<<")";
    }
}
int main()
{
    int arr[] = { -10, -3, 5, 6, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
    return 0;
    
}