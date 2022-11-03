// link-https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/
// solution link-https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/discuss/2249480/C%2B%2B-or-Hashing-or-Easy-to-understand-or-O(n)-TC

// time complexity=o(n) in worst case
// space complexity=o(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string> words={"lc","cl","gg"};
        map<string,int> mp;

        int c=0;
        for(auto x:words)
        {
            string it=x;
            reverse(it.begin(),it.end());
            
            if(mp.find(it)!=mp.end()){
                c+=4;
                mp[it]--;
                if(mp[it]==0)
                     mp.erase(it);
            }
            else
              mp[x]++;
        }
        for(auto it:mp)
         {
            if(it.first[0]==it.first[1]){
                c+=2;
                break;
            }
         }
         cout<<c;
        return 0;
        
    }

