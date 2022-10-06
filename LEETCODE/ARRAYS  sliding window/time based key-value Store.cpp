// link -https://leetcode.com/problems/time-based-key-value-store/submissions/
// youtube link-youtube.com/watch?v=lqSJPJUR9bQ


// approach
// form map key is string then we use pair in pair timestamp represents int and strinf represents value
// rest written in Lines of code

unordered_map<string,vector<pair<int,string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        // in this we are just soring the key in map
        // for example foo->{1,bar}; 
        mp[key].push_back({timestamp,value}) ;

    }
    
    string get(string key, int timestamp) {
        // check for the key in map if not present return null
        if(mp.find(key)==mp.end())
           return "";
        // now apply binary search
        int l=0;
        int r=mp[key].size()-1;
        // now check for that given condition that given timestamp should be less than timestamp in key
        if(mp[key][0].first>timestamp)
           return "";
        string ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(mp[key][mid].first==timestamp)
                return mp[key][mid].second;
            else if(mp[key][mid].first<timestamp)
               {
                // this ans line is most important bcoz by this we are storing the timestamp value which is less than given timestamp and maximum or greater than other timestamp in map 
                ans=mp[key][mid].second;
                l=mid+1;
               }
            else
              r=mid-1;
        }
        return ans;
    }
};