//PROBLEM
/*
        FIND A PAIR WITH A MINIMUM ABSOLUTE SUM IN AN ARRAY
Given a sorted integer array, find a pair in it having an absolute minimum sum.
For Example-:
INPUT-: A=[-6,-5,-3,0,2,4,9]
OUTPUT-: Pair is (-5,4)
(-5,4) =abs(-5+4)=abs(-1)=1,which is minimum among all pairs.
*/

//SOLUTION
//(1)BRUTE-FORCE SOLUTION
/*
#include<bits/stdc++.h>
using namespace std;
void findPair(int arr[],int n)
{
    int min=INT_MAX;
    int low=0,high=0;
    if(n<2)
    {
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]+arr[j])<min)
            {
                min=(abs(arr[i]+arr[j]));
                low=i;
                high=j;
            }
            if(min==0)
            {
                break;
            }
        }
    }
    cout<<"Pair found ("<<arr[low]<<","<<arr[high]<<")";
}
int main()
{
    int arr[] = { -6, -5, -3, 0, 2, 4, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    findPair(arr, n);
 
    return 0;
}*/

//SOLUTION
//(2) OPTIMIZED SOLUTION
#include<bits/stdc++.h>
using namespace std;
void findPair(int arr[],int n)
{
    if(n<2)
    {
        return;
    }
    int low=0;
    int high=n-1;
    int min=INT_MAX;
    int i,j;
    while(high>low)
    {
        if(abs(arr[high]+arr[low])<min)
        {
            min=abs(arr[high]+arr[low]);
            i=low;
            j=high;
        }
        if(min==0)
        {
            break;
        }
        (arr[high]+arr[low]<0)?low++:high--;
    }
    cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")";
}
int main()
{
    int arr[] = { -6, -5, -3, 0, 2, 4, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    findPair(arr, n);
 
    return 0;
}