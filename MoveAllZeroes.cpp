/*
        MOVE ALL ZEROES AT THE END
Given an integer array, move all zeroes present in it to the end. The solution
should maintain the relative order of tems in the array and should not use 
constant space.
FOR EXAMPLE:
Input: {6,0,8,2,3,0,4,0,1}
Output: {6,8,2,3,4,1,0,0,0}
*/

//SOLUTION
//(1) VECTOR PARTITION FUNCTION
/*#include<bits/stdc++.h>
using namespace std;
void reorder(int A[],int n)
{
    vector<int> v1(A,A+n);
    //int count=0;
    //for(auto itr=v1.begin();itr!=v1.end();itr++)
    //{
        //if(*itr==0)
        //{
            //v1.erase(itr);
            //count++;
        //}
    //}
    //for(int i=0;i<count;i++)
    //{
        //v1.push_back(0);
    //}
    //for(auto itr=v1.begin();itr!=v1.end();itr++)
    //{
        //cout<<*itr<<" ";
    //}
    partition(v1.begin(),v1.end(),[](int x){
        return x!=0;
    });
    for(int &x:v1)cout<<x<<" ";
}
int main()
{
    int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int n = sizeof(A) / sizeof(A[0]);
 
    reorder(A, n);
 
   
    return 0;
}*/

//SOLUTION 
//(2) 
#include<bits/stdc++.h>
using namespace std;
void reorder(int A[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=0)
        {
            A[k]=A[i];
            k++;
        }
    }
    for(int i=k;i<n;i++)
    {
        A[i]=0;
    }
}
int main()
{
    int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int n = sizeof(A) / sizeof(A[0]);
 
    reorder(A, n);
 
    for (int i = 0; i < n; i++) {
        cout<<A[i]<<" ";
    }
 
    return 0;
}