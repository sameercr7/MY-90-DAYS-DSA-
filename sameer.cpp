#include<bits/stdc++.h>
using namespace std;
    int majorityElement()
     {
        vector<int> nums={3,2,3};
        int n = nums.size();
        int majority = nums[0];
        int count = 1;
        
        for(int i=1;i<n;++i)
        {
            if(nums[i]==majority)
                count += 1;
            else
            {
                count -= 1;
                if(count==0)
                {
                    majority = nums[i];
                    count = 1;
                }
            }
        }
        return majority;
    }