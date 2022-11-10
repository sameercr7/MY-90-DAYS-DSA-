// link=https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// youtube link=https://www.youtube.com/watch?v=VeOUal3_s6c
// yotube link=https://www.youtube.com/watch?v=52TwSRU5NJM


// approach-1
// // youtube link=https://www.youtube.com/watch?v=52TwSRU5NJM
// to easy approach just by using the .back() stl command
// time complexity =o(n)
// space complexity=o(n)


class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
       for(int i=0;i<s.size();i++)
       {
           if(res.back()==s[i])
               res.pop_back();
           else
               res+=s[i];
       }
        return res;
    }
};


// approach-2
// youtube link=https://www.youtube.com/watch?v=VeOUal3_s6c
// optimize solution
// we will use stack as space complexity reduce to o(1)
// time complexity =o(n)
// space complexity=o(1)

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
           
            if( st.empty() || st.top()!=s[i] )
               st.push(s[i]);
            else
                st.pop();
        }
        string ans="";
        while(!st.empty()){
             ans.push_back(st.top());
            // ans=st.top()+ans;
            st.pop();
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};