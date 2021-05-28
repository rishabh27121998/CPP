#include<bits/stdc++.h>
using namespace std;
void printVect(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;//size()----> O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int N;
    cout<<"\nEnter the size of Aray: ";
    cin>>N;
   vector<int> v[N];//Aray of vector containig N vectors
   for(int i=0;i<N;i++)
   {
       int n;
       cout<<"\nEnter the number of elements in "<<i+1<<" vector: ";
       cin>>n;
       for(int j=0;j<n;j++)
       {
           int x;
           cout<<"\nEnter the "<<j+1<<" element: ";
           cin>>x;
           v[i].push_back(x);
       }
   }
   for(int i=0;i<N;i++)
   {
       printVect(v[i]);
   }
    return 0;
}
