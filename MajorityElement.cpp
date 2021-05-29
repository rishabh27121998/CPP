/*
        FIND MAJORITY ELEMENT 
Given an integer array containing duplicates, return the majority element if 
present. A majority element appears more than n/2 times, where n is the 
array size.

For Example,
the majority element is 2 in array 2,8,7,2,2,5,2,3,1,2,2}
*/

//SOLUTION
//(1)USING HASHING

/*#include<bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int> &A)
{
    unordered_map<int,int> map;
    for(int i=0;i<A.size();i++)
    {
        map[A[i]]++;
    }
    for(auto pair:map)
    {
        if(pair.second>(A.size()/2))
        {
            return pair.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> input = { 2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2 };
 
    int result = findMajorityElement(input);
    if (result != -1) {
        cout << "The majority element is " << result;
    }
    else {
        cout << "The majority element doesn't exist";
    }
 
    return 0;
}*/

//SOLUTION
//(2)USING BOYE-MOORE MAJORITY VOTE ALGORITHM
#include<bits/stdc++.h>
using namespace std;
int findCandidate(int A[],int n)
{
    int m,i=0;
    for(int j=0;j<n;j++)
    {
        if(i==0)
        {
            i=i+1;
            m=A[j];
        }
        else
        {
            (A[j]==m)?i++:i--;
        }
    }
    return m;
}
bool isMajority(int A[],int n,int cand)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==cand)
        {
            count++;
        }
    }
    if(count>n/2)
    {
        return 1;
    }
    return 0;
}
void printMajority(int A[],int n)
{
    int cand=findCandidate(A,n);
    if(isMajority(A,n,cand))
    {
        cout<<"Majority Element is: "<<cand<<endl;
    }
    else
    {
        cout<<"\nNo Majority element";
    }
}
int main()
{
    int A[]={ 2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2 };
    int n=sizeof(A)/sizeof(A[0]);
    printMajority(A,n);
    return 0;
}




