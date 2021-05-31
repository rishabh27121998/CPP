/*
//PROBLEM
        ADD ELEMENTS OF TWO ARRAYS INTO A NEW ARRAY
        
Given two array of positive integer, add their elements into a new array.
The solution should add both arrays, one by one starting from the 0th 
index, and split the sum into individual digits if it is  2-digit number.
For Exmple
INPUT-: a={23,5,2,7,87}
        b={4,67,2,8}
OUTPUT-: {2,7,7,2,4,1,5,8,7}
*/
#include<bits/stdc++.h>
using namespace std;
void splitNumbers(int num,vector<int> &result)
{
    if(num>0)
    {
        splitNumbers(num/10,result);
        result.push_back(num%10);
    }
}

void add(vector<int> &a,vector<int> &b,vector<int> &result)
{
    int m=a.size();
    int n=b.size();
    int i=0;
    for(i=0;i<m&&i<n;i++)
    {
        int sum=a[i]+b[i];
        splitNumbers(sum,result);
        
    }
    //process remaining elements of the first vector, if any
    while(i<m)
    {
        splitNumbers(a[i++],result);
    }
    //process remaining elements of the second vector, if any
    while(i<n)
    {
        splitNumbers(b[i++],result);
    }
}
int main()
{
    // input vectors
    vector<int> a = { 23, 5, 2, 7, 87 };
    vector<int> b = { 4, 67, 2, 8 };
 
    // vector to store the output
    vector<int> result;
    add(a, b, result);
 
    // print the output vector
    for (int i: result) {
        cout << i << " ";
    }
 
    return 0;
}