// jump game



// You are initially positioned at the array's first index, 
// and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index, or false otherwise.


#include <bits/stdc++.h>
using namespace std;
 #define ll long long
int main()

 {vector<int> nums={3,2,1,0,4};
        int t,maxi=0;
        for(int i=0;i<nums.size();i++){
            
            if(maxi<i)
                cout<<"false";
            maxi=max(maxi,i+nums[i]);
        }
        cout<<"true";


    return 0;
}