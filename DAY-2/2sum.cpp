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

>>>>>>> 5c800002a20a931073c1389272d3833f0f1eac38
