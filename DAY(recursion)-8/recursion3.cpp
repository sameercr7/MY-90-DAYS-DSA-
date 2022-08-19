// Time complexity: O(2^n) refer to screeshot
// Space complexity: O(n)
// TOWER OF HANOI
// please refer to aditya verma recusion question on youtube https://www.youtube.com/watch?v=l45md3RYX7c
#include <bits/stdc++.h>

using namespace std;
class Solution{
    public:
   
    long long count=0;
    long long toh(int n, int source, int destination, int helper) {
        if(n==1){
            count++;
            cout << "move disk " << n << " from rod " << source << " to rod " << destination << endl;;
            return count;
        }
        toh(n-1,source,helper,destination);
        count++;
        cout << "move disk " << n << " from rod " << source << " to rod " << destination<< endl;
        toh(n-1,helper,destination,source);
    }

};



int main() {

    int T;
    cin >> T;
    while (T--) {
        
        int N;
        cin >> N;
        
        
        Solution ob;
        
        cout << ob.toh(N, 1,3,2) << endl;
    }
    return 0;
}


