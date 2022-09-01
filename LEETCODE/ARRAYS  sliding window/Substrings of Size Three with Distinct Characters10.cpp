// 1876. Substrings of Size Three with Distinct Characters

// A string is good if there are no repeated characters.

// Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

// Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

// A substring is a contiguous sequence of characters in a string.

 

// Example 1:

// Input: s = "xyzzaz"
// Output: 1
// Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
// The only good substring of length 3 is "xyz".
// Example 2:

// Input: s = "aababcabc"
// Output: 4
// Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
// The good substrings are "abc", "bca", "cab", and "abc".

// problem link =https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/ 

// approach-first calculte all the substring then ...take only those who has length ==3 and take a set to have no repetive substring .....
// at last calculate its length if it is ==3 then it is no repitive

// time complexity-O(n^2)
// space complexity=O(n)




#include<bits/stdc++.h>
using namespace std;
    int main()
     {
       
        string s="aababcabc";
        int k=3,c=0;
        for(int i=0;i<s.size();i++)
        {
            string substr;
            for(int j=i;j<s.size();j++){
                substr+=s[j];
            if(substr.size()==k){
                set<char> se(substr.begin(),substr.end());
                if(se.size()==k)
                  c++;
            }
                // cout<<substr<<endl;
            }}
            cout<<c;
     
    
    return 0;
     }


