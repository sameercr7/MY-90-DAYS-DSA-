// 3. Longest Substring Without Repeating Characters
// Medium



// Share
// Given a string s, find the length of the longest substring without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

// approach -time O(2n) as end pointer is traversing again
// approach - space O(n)
// in this used set if  it is in map so erase kr do wrna map mein insert krdo
//  youtube link struver ya alisha ka dkhlena = https://www.youtube.com/watch?v=qtVh-XEpsJo  
// problem link = https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include<bits/stdc++.h>
using namespace std;
int main(){
int start=0,end=0,maxi=0;
string s="abcabcbb";
        set<char> se;
        while(start<s.size()){
            auto it=se.find(s[start]);
            if(it==se.end())
            {   
                if(start-end+1>maxi)
                    maxi=start-end+1;
                se.insert(s[start]);
                start++;
                
            }
            else{
                se.erase(s[end]);
                end++;
            }
            
            
        }
        cout<<maxi;
        return 0;
}




// best approach
// using hash map ... most important  vector<int> mappy(256,-1); take always this to avoid errors

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int lengthofLongestSubstring(string s) {
     vector<int> mappy(256,-1);
  
      int left = 0, right = 0;
      int n = s.size();
      int len = 0;
      while (right < n) {
        if (mappy[s[right]] != -1)
          left = max(mappy[s[right]] + 1, left);

        mappy[s[right]] = right;

        len = max(len, right - left + 1);
        right++;
      }
      return len;
    }
};

int main() {
  string str = " ";
  Solution obj;
  cout << "The length of the longest substring without repeating characters is " << obj.lengthofLongestSubstring(str);
  return 0;
}