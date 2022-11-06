// link-https://leetcode.com/problems/orderly-queue/
// youtube link-https://www.youtube.com/watch?v=ff8kxXeFhl8


// we just have to check for the k=1 as for the rest k>1 every word will ultimately got to its lexicographic order

// time complexity=o(nlog(n))
// space complexity=O(1)

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1){
			// first just add the string s in original string for pattern matching
            string new_string=s+s,curr_string=s;
            int n=curr_string.size();
			// important thing i=1 as first string we have already taken as  s='cba' new_string='cbacba'
            for(int i=1;i<curr_string.size();i++){
				// we are extracting a pattern an checking for the minimum lexicographic
                string pat=new_string.substr(i,n);
                if(pat<curr_string)
                    curr_string=pat;
            }
            return curr_string;
            
            
        }
        sort(s.begin(),s.end());
        return s;
        
    }
};