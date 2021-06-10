/*
//PROBLEM
        SEGREGATE POSITIVE AND NEGATIVE INTEGERS IN LINEAR TIME
        
Given an array of positive and negative integers, segregate them in linear time 
and constant space. The output should print all negative numbers, followed by 
all positive numbers.
FOR EXAMPLE:
INPUT: [9,-3,5,-2,-8,-6,1,3]
OUTPUT: [-3,-2,-8,-6,5,9,1,3]
*/
//SOLUTION
/*#include<bits/stdc++.h>
using namespace std;
void partitioned(int a[],int start,int end)
{
    vector<int> vect(a,(a+end)+1);
    partition(vect.begin(),vect.end(),[](int x)
    {
        return x<0;
    });
    for(auto l:vect)cout<<l<<" ";
}
int main()
{
    int a[] = { 9, -3, 5, -2, -8, -6, 1, 3 };
    int n = sizeof(a)/sizeof(a[0]);
 
    partitioned(a, 0, n - 1);
 
 
    return 0;
}*/

//SOLUTION
#include<bits/stdc++.h>
using namespace std;
 
void partition(int a[], int start, int end)
{
    int pIndex = start;
 
    
    for (int i = start; i <= end; i++)
    {
        if (a[i] < 0)   
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
}
 
int main()
{
    int a[] = { 9, -3, 5, -2, -8, -6, 1, 3 };
    int n = sizeof(a)/sizeof(a[0]);
 
    partition(a, 0, n - 1);
 
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
 
    return 0;
}



