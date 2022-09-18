// https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/
// 2414. Length of the Longest Alphabetical Continuous Substring
// Medium

// 0

// 0

// Add to List

// Share
// An alphabetical continuous string is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string "abcdefghijklmnopqrstuvwxyz".

// For example, "abc" is an alphabetical continuous string, while "acb" and "za" are not.
// Given a string s consisting of lowercase letters only, return the length of the longest alphabetical continuous substring.

 

// Example 1:

// Input: s = "abacaba"
// Output: 2
// Explanation: There are 4 distinct continuous substrings: "a", "b", "c" and "ab".
// "ab" is the longest continuous substring.
// Example 2:

// Input: s = "abcde"
// Output: 5
// Explanation: "abcde" is the longest continuous substring.


// Approach

// or a substring to be in alphabetical order its character is in the same sequence as they occur in English alphabets. 
// Also, the ASCII value of consecutive characters in such substring differs by exactly 1. 
// For finding a total number of substrings that are in alphabetical order traverse the given string and compare two neighboring characters, 
// if they are in alphabetic order increment the result and then find the next character in the string which is not in alphabetic order to its former character.

// Algorithm : 

// Iterate over string length: 

// if str[i]+1 == str[i+1] 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcde" ;
        int maxi=1,count=1;
        for(int i=0;i<s.size();i++){
            if(s[i] + 1 == s[i + 1]){
                count++;
            maxi=max(count,maxi);
            }
            else
                count=1;
        }
        
        cout<<maxi;
    }