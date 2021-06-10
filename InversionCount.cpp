/*
//PROBLEM
        COUNT TRIPLETS WHICH FORM AN INVERSION IN AN ARRAY 

Given an array, count the total number of triplets, which leads to an inversion. 
If (i<j<k) and (A[i]>A[j]>A[k]), then we can say that triplet (i,j,k) formed an 
inversion in an array A.
For example

INPUT: A[]=[1,9,6,4,5]
OUTPUT: THe inversion count is 2

There are two inversions of size three in the array:
(9,6,4) and (9,6,5).

INPUT: A[]=[9,4,3,5,1]
OUTPUT: The inversion cout is 5

There are five inversions of size three in the array:
(9,4,3),(9,4,1),(9,3,1),(4,3,1), and (9,5,1).
*/

//SOLUTION 
//BRUTE-FORCE
/*#include<bits/stdc++.h>
using namespace std;
int finInversionCount(int arr[],int n)
{
    int inversionCount=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]>arr[j]&&arr[j]>arr[k])
                {
                    inversionCount++;
                }
            }
        }
    }
    return inversionCount;
}
int main(void)
{
    int arr[] = { 9, 4, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("The inversion count is %d", findInversionCount(arr, n));
 
    return 0;
}*/

/*
We can easily reduce the time complexity of the solution from O(n3) to O(n2).
The idea is to consider each element in the array arr[j]] as the middle element
of the triplet. Then the total number of inversions with arr[j] as the middle 
element is the product of the total number of elements greater than arr[j] with
index less than j with the total number of elements smaller than arr[j] with 
index more than j.
*/

#include<bits/stdc++.h>
using namespace std;
int findInversionCount(int arr[],int n)
{
    int inversionCount=0;
    for(int j=1;j<n-1;j++)
    {
        int greater=0;
        for(int i=0;i<j;i++)
        {
            if(arr[i]>arr[j])
            {
                greater++;
            }
        }
        int smaller=0;
        for(int k=j+1;k<n;k++)
        {
            if(arr[k]<arr[j])
            {
                smaller++;
            }
        }
        
        inversionCount+=(greater*smaller);
        
    }
    return inversionCount;
}

int main()
{
    int arr[]={9,4,3,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The inversion count is "<<findInversionCount(arr,n);
    return 0;
}


