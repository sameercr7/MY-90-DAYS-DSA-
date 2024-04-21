// link-https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/
// youtube link-https://www.youtube.com/watch?v=4UMTV670ZWM

// approach yhi h ki  If we know the sum of a subtree, the answer is max( (total_sum - subtree_sum) * subtree_sum) in each node.
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
        string s1 = "";
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(s1);
                s1="";
            }
            else
              s1+=s[i];
        }
        // cout<<v.size();
		 v.push_back(s1);
         if(v.size() != pattern.size()){
			return false;
		}
      unordered_map<char,string> mp;
      set<string> st;
      for(int i=0;i<pattern.size();i++){
        if(mp.find(pattern[i])!=mp.end()){
            if(mp[pattern[i]]!=v[i])
            {
                return false;
            }

        }
        else{
            // now assign  that vector value to pattern value
            // set is for the example pattern="abba" s="dog dog dog dog"
            if(st.count(v[i])>0){
                return false;
            }
            mp[pattern[i]]=v[i];
            st.insert(v[i]);
        }
      }
      return true;

        
return 0;
    }
