// link-https://leetcode.com/problems/count-and-say/
// youtube link-https://www.youtube.com/watch?v=Vp5asrxlg18


// simple approach
// 1-store the base condition "1" in ans
// 2-i=2 to n coz...you already calculate for i=1
// 3-rest is simple 

// time complexity=o(n^2) not O(n^3)  as we are directly jumping in the third loop
// space complexity=o(1)

class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=2;i<=n;i++){
             string ls=ans;
            int l=ans.size();
            int j=0;
            ans="";
            while(j<l){
                int count =j;
            
            while(j<l && ls[j]==ls[count]){
                count++;
                }
                ans+=to_string(count-j)+ls[j];
                j=count;
        }
     
        }
        return ans;
    }
};