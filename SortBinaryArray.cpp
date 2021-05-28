/*
        SORT BINARY ARRAY IN LINEAR TIME
Given a binary array, sort it in linear time and constant space.
The output should print all zeroe, followed by all ones.
FOR EXAMPLE-:
Input:  { 1, 0, 1, 0, 1, 0, 0, 1 }
 
Output: { 0, 0, 0, 0, 1, 1, 1, 1 }

*/

#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    int zeroes=0;
    for(int i=0;i<n;i++)
    if(a[i]==0)
    {
        zeroes++;
    }
    for(int i=0;i<zeroes;i++)
    {
        a[i]=0;
    }
    for(int i=zeroes;i<n;i++)
    {
        a[i]=1;
    }
}
int main()
{
    int a[]={0,0,1,0,1,1,0,1,0,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
