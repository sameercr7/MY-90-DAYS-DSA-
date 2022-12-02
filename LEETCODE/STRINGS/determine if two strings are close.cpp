// link-https://www.youtube.com/watch?v=rPR6DxPE2K4&t=737s
// link-https://leetcode.com/problems/determine-if-two-strings-are-close/


class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> s1(26,0),s2(26,0),s3(26,0),s4(26,0);
        for(auto it:word1){
//             this is for frequency
            s1[it-'a']++;
//             this is for that atricular character which is present or not
            s3[it-'a']=1;
        }
        for(auto it:word2){
//             this is for frequency
            s2[it-'a']++;
//             this is for that atricular character which is present or not
            s4[it-'a']=1;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2 && s3==s4;
        
        
    }
};