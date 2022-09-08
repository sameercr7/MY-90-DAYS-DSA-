// Length of Last Word
// Easy

// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.


approach - just traverse the array from back side
if ypou counter any aplhabet the move to the next gap ab condition is out from if to else ...simply  print count


time complexity=(o(n))
space complexity=o(1)

#include<bits/stdc++.h>
using namespace std;

int main() {
    // string s;
    // cin>>s;

    string s="fly me to the moon  ";
    int count=0;
    bool flag =false;
    for(int end=s.size()-1;end>=0;end--){
        if((s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z')){
            flag=true;
            count++;
        }
        else
           {
            if(flag==true){
               break;
            }
           }
    }
           cout<<count<<endl;
        return 0;
}