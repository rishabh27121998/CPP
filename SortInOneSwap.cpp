/*
        SORT ARRAY IN ONE SWAP WHOSE TWO ELEMENTS ARE SWAPPED
        
Given an array where all its elements are sorted except two swapped elements, 
sort it in linear time. Assume there are no duplicates in the array.
For Example-:
INPUT: A[]=[3,8,6,7,5,9] OR [3,5,6,9,8,7] OR [3,5,7,6,8,9]
OUTPUT-: A[]=[3,5,6,7,8,9]
*/
/*

IDEA

The idea is to staart from the second array element and compare every element 
with its previous element. We take two pointers, x and y, 
to store conflict's lication. 
If the previous eleent is greater than the current element, 
update x to the previous element index and y to the current element index.
If we find that the previous element is greater than the current element,
update y to the current element index.
Finally, after we are done processing each adjacent pair of elements,
swap the elements at index x and y.
*/

//SOLUTION

#include<bits/stdc++.h>
using namespace std;
void sortArray(int arr[],int n)
{
    int x=-1,y=-1;
    int prev=arr[0];
    for(int i=1;i<n;i++)
    {
        if(prev>arr[i])
        {
            if(x==-1)
            {
                x=i-1;
                y=i;
            }
            else
            {
                y=i;
            }
        }
        prev=arr[i];
    }
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
int main()
{
    // int arr[] = { 3, 8, 6, 7, 5, 9 };
    int arr[] = { 3, 5, 6, 9, 8, 7 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sortArray(arr, n);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}