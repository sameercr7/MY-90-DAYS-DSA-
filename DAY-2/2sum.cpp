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
