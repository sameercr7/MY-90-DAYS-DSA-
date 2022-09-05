// the difference sum

problem link-https://leetcode.com/problems/find-the-difference/submissions/

// use map
// first mapp mein entries lelo s 
// then t 
// phit dkhlo ki mappy (mp.find use krke) 
// last wala loop s="a"  t="aa" nio lgaoge to is case mein fail hojayega aur o/p d dega 

// time complexity =O(n)
//  but space complexity is =o(1)

class Solution {

public:
    char findTheDifference(string s, string t) {
     unordered_map<char,int> mp;
   for(auto it:s)
      mp[it]++;
    for(auto it:t){
       if(mp.find(it)!=mp.end())
          mp[it]--;
        else
            return it;
    }
        for(auto i:mp){
            if(i.second!=0)
                return i.first;
        }
        return 'd';
    }


// toh ek bhdiya approach h 
// time ocmplexity =O(n)
// space ocmplexity =O(1)
     int a=0,b=0;
        for(auto it:s)
            a+=it;
        for(auto it:t)
            b+=it;
        return b-a;
            
            
    }