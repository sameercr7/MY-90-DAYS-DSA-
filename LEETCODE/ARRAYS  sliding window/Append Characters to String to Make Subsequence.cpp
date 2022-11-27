// link-https://leetcode.com/contest/weekly-contest-321/problems/append-characters-to-string-to-make-subsequence/

// approach-simple two pointer appproach lgadoo



class Solution {
public:
    int appendCharacters(string s, string t) {
        int l=0,r=0;
        while(l<s.size()){
            while(l<s.size() && s[l]!=t[r])
                l++;
            if(l==s.size())
                return t.size()-r;
            l++;
            r++;
                
        }
        return t.size()-r;
        
    }
};