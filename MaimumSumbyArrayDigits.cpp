/*PROBLEM
        FIND TWO NUMBERS WITH MAXIMUM SUM FORMED BY ARRAY DIGITS

Given an integer array between 0 and 9, find two numbers with maximum sum
formed using all the array digits. The difference in the number of digits 
of the two numbers should be +1 or -1.
For example-: 

INPUT: {4,6,2,7,9,8}
OUTPUT: The two numbers with maximum sum are 974 and 862
*/

//SOLUTION

#include<bits/stdc++.h>
using namespace std;
pair<int,int> findMaximum(vector<int> input)
{
    sort(input.rbegin(),input.rend());
    int x=0;
    for(int i=0;i<input.size();i=i+2)
    {
        x=x*10+input[i];
    }
    int y=0;
    for(int i=1;i<input.size();i=i+2)
    {
        y=y*10+input[i];
    }
    return make_pair(x,y);
}
int main()
{
    vector<int> input={4,6,2,7,9,8};
    pair<int,int> p=findMaximum(input);
    cout<<"The two numbers with maximum sum are "<<p.first<<" and "<<p.second;
    return 0;
}