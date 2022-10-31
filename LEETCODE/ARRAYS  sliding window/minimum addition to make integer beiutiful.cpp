// link=https://leetcode.com/problems/minimum-addition-to-make-integer-beautiful/
// youtube link= https://www.youtube.com/watch?v=eZko6QYn-GA



class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        
        long long ans=0, copy=n;
        int level=0,sum=0;
        while(n){
            sum+=(n%10);
            n=n/10;
            
        
        while(sum>target){
//    first check that zero exist at the end or not if exist then increase level by 1

            if(copy%10==0)
            {
                level++;
                copy=copy/10;
            }
            else{
//    now calculate the future no that will add to copy to become its nearest 10 that means ...if copy=87 nearest 10 is copy=90...52=50....456=460
                int future_sum=10-(copy%10);
                copy+=future_sum;
                n=copy;
                sum=0;
                while(n){
                    sum+=(n%10);
                    n=n/10;
                }

//    this statement is very important its just simply adding the X to the number...Basically its a X which is mentioned in question

                ans=ans+(pow(10,level)*future_sum);
            }
            
        }
        }
        return ans;
        
    }
};

