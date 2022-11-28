// link-https://leetcode.com/problems/find-players-with-zero-or-one-losses/
// link-https://www.youtube.com/watch?v=bXptmD2qWYI


class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> res(2);
        vector<int> v;
      unordered_map<int,int> looser;
//         just forming the map
        for(int i=0;i<matches.size();i++)
                looser[matches[i][1]]++;
        vector<int> winner;
        vector<int> loose_at_one;
        for(int i=0;i<matches.size();i++){
            int m=matches[i][0];
            int m1=matches[i][1];
//             check if m is present if not present that means it haven't lost any matches
            if(looser.find(m)==looser.end()){
                winner.push_back(m);
//                 ye isiliye taaki dubara na use kre hum log
                looser[m]++;
            }
            if(looser[m1]==1)
                loose_at_one.push_back(m1);
            
        }
        sort(winner.begin(),winner.end());
        sort(loose_at_one.begin(),loose_at_one.end());
        return {winner,loose_at_one};
    
    }
};