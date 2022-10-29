// link-https://leetcode.com/problems/earliest-possible-day-of-full-bloom/
// youtube link-https://www.youtube.com/watch?v=vMz0wIN5yRY


class Solution {
public:
  static  bool comp(pair<int,int> p1,pair<int,int> p2){
        return p1.second>p2.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int maxi=0, start=0;
//         we will use pair to store the plant time and grow time value as if they are pair
        vector<pair<int,int>> p;
        for(int i=0;i<plantTime.size();i++)
            p.push_back({plantTime[i],growTime[i]});
//             we will sort accoriding the value thjat is grow time using comparator
        sort(p.begin(),p.end(),comp);
//         now last loop to calculate maximum time taken by flower to bloom
        for(int i=0;i<plantTime.size();i++)
        {
//             start+(plantTime) why ? ...as it will not overlap so it has to inclued
            
            start+=p[i].first;
            maxi=max(maxi,start+p[i].second);
            
        }
        return maxi;
        
    }
};