// 438. Find All Anagrams in a String
// Medium

// 8610

// 271

// Add to List

// Share
// Given two strings s and p, return an array of all the start indices of p anagrams in s. You may return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "cbaebabacd", p = "abc"
// Output: [0,6]
// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".
// Example 2:

// Input: s = "abab", p = "ab"
// Output: [0,1,2]
// Explanation:
// The substring with start index = 0 is "ab", which is an anagram of "ab".
// The substring with start index = 1 is "ba", which is an anagram of "ab".
// The substring with start index = 2 is "ab", which is an anagram of "ab".


// same complexity hogi jo tmne strings wale section mein 



// time complexity=O(n-m+m)=O(n)
// space complexity=O(char)



#include<bits/stdc++.h> 
using namespace std; 

 vector<int> findAnagrams(string  &s, string &p) {
       if(s.size()<p.size())
            return {};
        vector<int> stri(26,0);
         vector<int> patt(26,0);

vector<int> final_arr;
        
        for(int i=0;i<p.size();i++){
            stri[s[i]-'a']++;
            patt[p[i]-'a']++;
        }
        if(stri==patt)
            final_arr.push_back(0);
        for(int i=p.size();i<s.size();i++){
            stri[s[i]-'a']++;
            stri[s[i-p.size()]-'a']--;
            if(stri==patt)
                final_arr.push_back(i);
            
        }
		
		   
		return final_arr;
} 
 int main(){
	string s= "cbaebabacd",p="abc";
    vector<int> v=findAnagrams(s,p);
	for(auto it:v)
	   cout<<it<<" ";
	
	return 0;
 }