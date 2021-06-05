/*
//PROBLEM
        ACTIVITY SELECTION PROBLEM
    
Activity Selection Problem: Given a set of activities, along with the
starting and finsihing time of each activity, find the maximum number of
activities performed by a single person assuming that a person can only work 
on a single activity at a time. 
 For Example:
 INPUT: Following set of activities 
 
 (1,4),(3,5),(0,6),(5,7),(3,8),(5,9),(6,10),(8,11),(8,12),(2,13),(12,14)
 
 OUTPUT: 
 (1,4),(5,7),(8,11),(12,14)
 */
 #include<bits/stdc++.h>
 using namespace std;
 void selectActivity(vector<pair<int,int>> activities)
 {
     int k=0;
     
     unordered_set<int> out;
     out.insert(0);
     sort(activities.begin(),activities.end(),[](auto const &lhs,auto const &rhs)
     {
         return lhs.second<rhs.second;
     });
     for(int i=1;i<activities.size();i++)
     {
         if(activities[i].first>=activities[k].second)
         {
             out.insert(i);
             k=i;
         }
     }
     for(int i:out)
     {
         cout<<"{"<< activities[i].first<<","<<activities[i].second<<"}"<<endl;
     }
 }
 int main()
 {
     vector<pair<int,int>> activities=
     {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9},
        {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
    };
    
    selectActivity(activities);
    return 0;
 }