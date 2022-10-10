// link-https://leetcode.com/problems/break-a-palindrome/
// youtube link-youtube.com/watch?v=GcAZssaAHqo


// approach
// we just have to print smallest lexicographic string 
// so for this we just have to if in string any character is not a then we replace that char with 'a' and return string
// why a? bcoz 'a' is the samllest in range a-z
// now one edge case what if all are 'aaaa' then next smallest character will be 'b' so just replace last character with 'b';

// time complexity=o(n)
// space complexity=o(1)


class Solution {
public:
    
    string breakPalindrome(string palindrome) {      
        int size=palindrome.size();
        if(size<=1)
            return "";
         for(int i=0;i<size/2;i++){
             if(palindrome[i]!='a'){
                 palindrome[i]='a';
             
                return palindrome;
             }
            }
        palindrome[size-1]='b';
        return palindrome;
        }
        
};