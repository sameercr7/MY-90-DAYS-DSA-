// link-https://leetcode.com/problems/string-compression/
// youtube link-https://www.youtube.com/watch?v=csOMcm_x2xs


// approach
// two pointers
// j value will be always start with i

// time complexity =o(n)...coz we are just jumping from i to j directly thats why compelxity is not o(n^2)
// space complexity=O(1)


class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j,n=chars.size(),k=0;
        while(i<n){
             j=i
             while(j<n && chars[i]==chars[j]){
                // if they match then just increase the right pointer by 1
                j++;
             }
            //  now we used k  pointer to just to calculate the length of ne chars array and to do "inplace"

             chars[k++]=chars[i];
             if(j-i>1){
                // now we are treating the len (j-i) not as a interger but as string
                // why?..bcoz in qustion it is said that if len (j-i)>10 then split that len in characters
                for(auto it:to_string(j-i))
                   chars[k++]=it;
             }
            //  most important step is this i=j....we are taking a jump of j in i bcoz we know until that we have already checked
            i=j;
        }
        return k;

        
    }
};