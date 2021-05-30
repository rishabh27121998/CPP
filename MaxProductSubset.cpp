/*
        MAXIMUM PRODUCT OF subset

Given an integer array, find a subset in it having the maximum product of its
elements.
For Example-:
INPUT-: A[]={-6,4,-5,8,-10,0,8}

OUTPUT-: The maximum prduct of a subset is 15360
The subset with the maximum product of its element is {-6,4,8,-10,8}
*/

//SOLUTION
//LINEAR-TIME SOLUTION
#include<bits/stdc++.h>
using namespace std;
int min(int x,int y)
{
    return (x<y)?x:y;
}
int findMaxProduct(int arr[],int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    
    int product=1;
    int abs_min_so_far=INT_MAX;
    int negative=0;
    int positive=0;
    int count_zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            negative++;
            abs_min_so_far=min(abs_min_so_far,abs(arr[i]));
        }
        else if(arr[i]>0)
        {
            positive++;
        }
        
        
        if(arr[i]==0)
        {
            count_zero=1;
        }
        else
        {
            product*=arr[i];
        }
    }
    if(negative&1)
    {
        product=product/-abs_min_so_far;
    }
    if(negative==1&&!positive&&count_zero)
    {
        product=0;
    }
    
}
int main()
{
    int arr[]={-6,4,-5,8,-10,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum product of a subset is "<<findMaxProduct(arr,n);
    return 0;
}