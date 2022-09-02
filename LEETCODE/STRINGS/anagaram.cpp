// 242. Valid Anagram
// Easy

// 6789

// 238

// Add to List

// Share
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

// problem link-https://leetcode.com/problems/valid-anagram/

#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
bool areAnagram(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
    vector<int> vec(256,0);
    for(int i=0;i<s1.length();i++){
        vec[s1[i]]++;
        vec[s2[i]]--;
    }
    
    for(int i=0;i<CHAR;i++){
        if(vec[i]!=0)return false;
    }
    return true;
} 
 
int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 