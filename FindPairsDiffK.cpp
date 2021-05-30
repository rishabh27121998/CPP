/*
PROBLEM
        FIND PAIRS WITH DIFFERENCE 'k' IN AN ARRAY

Given an unsorted integer array, print all pairs with a given differece k in it.
For Example-: 
INPUT: arr=[1,5,2,2,2,5,5,4]
k=3

OUTPUT: (2,5) and (1,4)
*/

//SOLUTION

#include<bits/stdc++.h>
using namespace std;
void findPair(int arr[],int n,int diff)
{
    sort(arr,arr+n);
    unordered_set<int> set;
    for(int i=0;i<n;i++)
    {
        //used to avoid duplicates (skip adjacent duplicates)
        while(i+1<n&&arr[i]==arr[i+1])
        {
            i++;
        }
        if(set.find(arr[i]-diff)!=set.end())
        {
            cout<<"("<<arr[i]<<","<<arr[i]-diff<<")"<<endl;
        }
        if(set.find(arr[i]+diff)!=set.end())
        {
            cout<<"("<<arr[i]<<","<<arr[i]+diff<<")"<<endl;
        }
        set.insert(arr[i]);
    }
}
int main()
{
    int arr[] = { 1, 5, 2, 2, 2, 5, 5, 4};
    int diff = -3;
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findPair(arr, n, diff);
 
    return 0;
}