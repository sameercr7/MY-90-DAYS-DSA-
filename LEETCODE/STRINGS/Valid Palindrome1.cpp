// 125. Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.


problem link - https://leetcode.com/problems/valid-palindrome/


// if you will use this extra string and then add to the string it will result in TLE or memory limit exceeded
// so to avoid that error we will use string as a vector


#include <bits/stdc++.h> 
using namespace std; 

// string removeconso(string k){
//     string t="";
    
//     for (int i = 0; i < k.size(); ++i) {
//         if ((k[i] >= 'a' && k[i] <= 'z') || (k[i] >= 'A' && k[i] <= 'Z')|| isdigit(k[i])) 
//             t = t + k[i];
        
// }
// return t;


// }

string removeconso(string k){
    string t;
    
    for (int i = 0; i < k.size(); ++i) {
        if ((k[i] >= 'a' && k[i] <= 'z') || isdigit(k[i])) 
            t.push_back(k[i]);
            // this next line wil convert all upper case to lower case 
        else if((k[i] >= 'A' && k[i] <= 'Z'))
            {
                k[i]=k[i]-'A'+'a';
                t.push_back(k[i]);
            }
}
return t;


}
bool solve(string stri){
    string st=removeconso(stri);
    // we can ignore this line
    // transform(st.begin(), st.end(), st.begin(), ::toupper);
    cout << st << endl;
    int start=0;
    int end=st.size()-1;
    while(start<end){
        if(st[start]!=st[end]){
            return false;
            
        }
        start++;
        end--;
}

return true;
}

int main(){
    string s="0P";
    if(solve(s))
      cout<<"haan bhai h palindrome"<<endl;
    else
    cout<<"nhi h"<<endl;
    return 0;
}