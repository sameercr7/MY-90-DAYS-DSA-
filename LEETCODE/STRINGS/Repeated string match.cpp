// 686. Repeated String Match
// Medium

// 1721

// 918

// Add to List

// Share
// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

 

// Example 1:

// Input: a = "abcd", b = "cdabcdab"
// Output: 3
// Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.
// Example 2:

// Input: a = "a", b = "aa"
// Output: 2

// https://leetcode.com/problems/repeated-string-match/discuss/2303190/C%2B%2B-or-3-Approaches-or-Brute-force-or-Rabin-Karp-or-KMP-search-or-Standard-implementation
// problem link=https://leetcode.com/problems/repeated-string-match/

#include<bits/stdc++.h>
using namespace std;
bool check(string &a,string &b){
     int m=a.size();
        int n=b.size();

        for(int i=0;i<=m-n;i++){
            int j;
            for(j=0;j<n;j++)
              if(a[i+j]!=b[j])
              break;
            if(j==n)
               return true;
             
        }
}

  int repeatedStringMatch(string a, string b) {
     int m=a.size();
        int n=b.size();
        int count=1;
        string temp=a;
        while(a.size()<b.size()){
            a+=temp;
            count++;
        }
        if(check(a,b)){
            return count;
        }
        a+=temp;
        if(check(a,b)){
            return count+1;
    }
    
    return -1;
    }
    int main(){
string a="AAAC",b="AAC";
cout<<repeatedStringMatch(a,b);

        return 0;
    }