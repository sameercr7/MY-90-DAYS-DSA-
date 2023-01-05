// link-https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
// youtube link-https://www.youtube.com/watch?v=zfcGwzfDNu0

time -O(nlog(n))
space-o(n)

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
//         kynki ek baar to baloon maarna hi padegaa
        int count=1;
        vector<int> prev=points[0];
        for(int i=1;i<n;i++){
//             prevsp=> prev starting point
            int prevsp=prev[0];
            int prevep=prev[1];
            
            int currsp=points[i][0];
            int currep=points[i][1];
//             this conditon to check overlapp ni h
            if(currsp>prevep){
                count++;
                prev=points[i];
            }
            else
            {
                prev[0]=max(currsp,prevsp);
                prev[1]=min(currep,prevep);
            }
            
        }
        return count;
    }
};