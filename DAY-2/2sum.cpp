<<<<<<< HEAD
#two sum problem 
#make a hash table in which key and value is both stored if it is not in the map  if (mp.find(target - nums[i]) != mp.end()) then just update the map with its value
#and if found the eturn the answer simple



vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		 res.push_back(i);
   		 res.push_back(mp[target - nums[i]]);
   		 return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;
}
// naive approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> vec;
        for(int i=0;i<nums.size();i++){
            int s=0;
            for(int j=i+1;j<nums.size();j++)
            { 
                
                if(nums[i]+nums[j]==target){
                    vec.push_back(i);
                     vec.push_back(j);
            }
            }
            if(vec.size()==2)
                break;
        }
        return vec;
    }
};




=======
#two sum problem 
#make a hash table in which key and value is both stored if it is not in the map  if (mp.find(target - nums[i]) != mp.end()) then just update the map with its value
#and if found the eturn the answer simple

// https://leetcode.com/problems/two-sum/

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		 res.push_back(i);
   		 res.push_back(mp[target - nums[i]]);
   		 return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;
}
hi sameer fuck off
// using set

#include <bits/stdc++.h>
using namespace std;


int pairWithSumX(int arr[],int n, int X)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
    {
        if(us.find(X - arr[i]) != us.end())
          return 1;
          
        us.insert(arr[i]);
    }
    return 0;
    
}

int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 14;
    
    cout << pairWithSumX(arr, n, X);
    return 0;
}

>>>>>>> 5c800002a20a931073c1389272d3833f0f1eac38
