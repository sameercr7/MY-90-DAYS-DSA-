//  Reverse Words in a String
// Medium

// 3832

// 4102

// Add to List

// Share
// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:

// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 


// problem link-https://leetcode.com/problems/reverse-words-in-a-string/


#include <bits/stdc++.h> 
using namespace std; 



string reverseWords(string &s,int n){
   reverse(s.begin(),s.end());
   int j=0,i=0;
//    +1 isiliye kynki last wale word ko reverse krne ka yhi way h ek
   while(j<s.size()+1){
    if(s.size()==j || s[j]==' '){
        reverse(s.begin()+i,s.begin()+j);
        // smart move i=j+1 taaki agle baar ke liye begin set ho jaye
        i=j+1;
    }
    j++;
   }
//    Now trim the leading and trailing spaces
// for removing leading spaces
 i=0;
while(s[i]==' '){
    i++;
}
s.erase(s.begin(),s.begin()+i);
// for removing trailing spaces
i=s.size()-1;
while(s[i]==' '){
    i--;
}
s.erase(s.begin()+i+1,s.end());
// for removing extra spaces between the words

for(i=0;i<s.size();i++)
{
    if(s[i]==' '){
        int k=i+1;
        while(s[k]==' '){
            k++;
        }
        s.erase(s.begin()+i+1,s.begin()+k);
    }
}
return s;





}
 
int main() 
{ 
    string s = "Welcome to Gfg";
    int n=s.size();
    cout<<"After reversing words in the string:"<<endl;
    cout<<reverseWords(s,n);
    
    
    return 0; 
} 



