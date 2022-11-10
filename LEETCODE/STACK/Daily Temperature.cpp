
// link =https://leetcode.com/problems/daily-temperatures/
// yputube link =https://www.youtube.com/watch?v=7MIXlgBfr_U

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
//         in stack we will just store the indexes
        stack<int> st;
//         this ans  vector array to store the day to get a warmer temperature 
        vector<int> ans;
        int n=temperatures.size()-1;
        for(int i=n;i>=0;i--){
            if(st.empty()){
                st.push(i);
                ans.push_back(0);
            }
            else{
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
                st.pop();
             if(st.empty()){
                st.push(i);
                ans.push_back(0);
            }
            else{
//                 st.top()-i gives us the index by exactly telling after how many days we will get warmer day

                ans.push_back(st.top()-i);
                st.push(i);
                
            }
        }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};