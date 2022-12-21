// link-https://leetcode.com/problems/keys-and-rooms/
// youtube link-youtube.com/watch?v=qDHd9n_XGQ8
// complexity=o(m+n)
// simple dfs

class Solution {
public:
    void dfs(vector<vector<int>>& rooms,int& source,vector<bool>& v){
//         mark the 0the room  as visited
        v[source]=true;
//         now simply tyraverse in nodes
        for(int& node:rooms[source]){
            if(!v[node])
                dfs(rooms,node,v);
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
//         making visiited array and intitializing it by false
        vector<bool> v(n,false);
        int s=0;
        dfs(rooms,s,v);
        for(auto it:v){
            if(it==false)
                return false;
            
        }
        return true;
    }
};