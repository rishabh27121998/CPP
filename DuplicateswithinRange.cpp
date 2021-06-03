/*
//PROBLEM 
        FIND DUPLICATES WITHIN A RANGE 'k' IN AN ARRAY

Given an array and a positive number k, check whether the array contains any 
duplicate element within the range k. If k is more than the array's size, the
solution should check for duplicates in the complete array.
For Example,

INPUT: A[]={5,6,8,2,4,6,9}
       k=4
OUTPUT: Duplicates Found
(element 6 repeats at distance 4 which is <=k)

*/

/*
//SOLUTION 
//(1) BRUTE FORCE APPROACH

#include<bits/stdc++.h>
using namespace std;
bool hasDuplicate(vector<int> &input,int k)
{
    for(int i=0;i<input.size()-1;i++)
    {
        for(int j=i+1;j<input.size();j++)
        {
            if(input[i]==input[j])
            {
                if(j-i<=k)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    vector<int> input = { 5, 6, 8, 2, 4, 6, 9 };
    int k = 4;
 
    if (hasDuplicate(input, k)) {
        cout << "Duplicates found";
    }
    else {
        cout << "No duplicates were found";
    }
 
    return 0;
}*/
/*

//SOLUTION 
//(2) USING HASHING

#include<bits/stdc++.h>
using namespace std;
bool hasDuplicate(vector<int> &input,int k)
{
    unordered_map<int,int> map;
    for(int i=0;i<input.size();i++)
    {
        if(map.find(input[i])!=map.end())
        {
            if(i-map[input[i]]<=k)
            {
                return true;
            }
        }
        map[input[i]]=i;
    }
    return false;
}
int main()
{
    vector<int> input = { 5, 6, 8, 2, 4, 6, 9 };
    int k = 4;
 
    if (hasDuplicate(input, k)) {
        cout << "Duplicates found";
    }
    else {
        cout << "No duplicates were found";
    }
 
    return 0;
}
*/
/*
We can also use a sliding window to solve the above problem. The idea is to 
process every window of size k and store its elements in a set. If any element
repeats in the window, we can say that it repeats within the range of k.
Initially, our window wll contain the first k elements of the input. Then 
for each item of the remaining input, add it to the current windwow. While
adding the i'th item of the input to the current window, remove (i-k)'th 
element from it. This ensures the efficiency of the solution and keeps the 
window balance at any point.
*/

//SOLUTION
//(3)SLIDING WINDOW APPROACH

#include<bits/stdc++.h>
using namespace std;
bool contains(unordered_set<int> &set,int x)
{
    return set.find(x)!=set.end();
}
bool hasDuplicate(vector<int> &input,int k)
{
    unordered_set<int> window;
    for(int i=0;i<input.size();i++)
    {
        if(contains(window,input[i]))
        {
            return true;
        }
        
        window.insert(input[i]);
        if(i>=k)
        {
            window.erase(input[i-k]);
        }
    }
    return false;
}
int main()
{
    vector<int> input = { 5, 6, 8, 2, 4, 6, 9 };
    int k = 4;
 
    if (hasDuplicate(input, k)) {
        cout << "Duplicates found";
    }
    else {
        cout << "No duplicates were found";
    }
 
    return 0;
}
