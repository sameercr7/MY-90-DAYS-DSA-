// link=https://leetcode.com/problems/group-anagrams/
// youtube link-https://www.youtube.com/watch?v=uEHkKkAzRuI

class Solution {
public:
vector<vector> groupAnagrams(vector& strs) {

// map used as we are making string a key and whatever the sort of string is coming strore it in map's value
unordered_map<string,vector> mp;
// this vector<vector is used for storing the values of map
vector<vector> res;
for(auto it:strs){
string s=it;
sort(s.begin(),s.end());
mp[s].push_back(it);
}
for(auto it:mp)
// important wehave to push the values which are in vector form in map mp
res.push_back(it.second);
return res;

}
};