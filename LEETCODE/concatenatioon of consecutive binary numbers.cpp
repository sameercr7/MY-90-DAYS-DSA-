1680. Concatenation of Consecutive Binary Numbers
problem link=https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/



// 1+log2(i) is for just calculatin the bits by which we have to do the left shift  
// we used mod so that value can be decreased at certain amount 
// time complexity o(n)
// space complexity=O(1)


class Solution {
public:
    
    int concatenatedBinary(int n) {
        long result=0;
        long  mod=1e9+7;
        int i=1;
        while(i<=n){
            result= ((result<<(1+int(log2(i)))) % mod +i)%mod;
            i++;
        }
        return result;
    }
        
};