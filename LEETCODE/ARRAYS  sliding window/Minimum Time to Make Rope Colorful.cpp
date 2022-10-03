// link-https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
// problem-1578. Minimum Time to Make Rope Colorful

// approach
// we used two pointer approach and greedy
// we just kept a maximum of every same colour groups
// we done this so we can subtract that maximum to get the minimum sum(just like we do in left prefi and right prefix)
// space complexity=o(1)
// time complexity=O(n^2) in worst case 

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string colors;
    cin>>colors;
    int n=colors.size();
    int res=0;
    vector<int> neededTime(n);
    for(auto &i:neededTime){
      cin>>i;
    }
    
    int left=0,right=0;
    while(left<n && right <n){
      int maxi=0,curr=0;
      while(right<n && colors[left]==colors[right]){
       maxi= max(maxi,neededTime[right]);
       curr+=neededTime[right];
       right++;
}
left=right;
res=res+(curr-maxi);
    }
  cout<<res;


    return 0;

}