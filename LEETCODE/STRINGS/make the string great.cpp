// link-https://leetcode.com/problems/make-the-string-great/
// youtube link-https://www.youtube.com/watch?v=0Yfkz6ZBWE8


// ans.back() ek peeche wale element ko check krta h
// basic logic was if same character is in smaller Case  and also same char in uppercase then their Absolute difference should be 32
// for e.g a=97 A=65 diffe=32

// first by two loop
class Solution {
public:
    string makeGood(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            ans.push_back(s[i]);
            while(ans.size() && abs(ans.back()-s[i+1])==32){
                ans.pop_back();
                i++;
            }
        }
        return ans;
            
    }
};

// by the use of stack

class Solution {
public:
    string makeGood(string s) {
   stack<char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if(abs(st.top()-s[i])==32)
            st.pop();
        else
            st.push(s[i]);
    }
    string ans;
    while(!st.empty()){
       ans=st.top()+ans;
        st.pop();
        
    }
    return ans;
    }
};
