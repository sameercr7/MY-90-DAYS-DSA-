// Interesting Subarray
// problem link - https://www.codechef.com/SEP221D/problems/SUBARRY


// Problem
// You are given an array AA of length NN.

// The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray.

// Find the minimum and maximum interesting value over all subarrays for the given array.

// Note: A subarray is obtained by deletion of several (possibly zero) elements from the beginning of the array and several (possibly zero) elements from the end of the array.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first line of each test case contains an integer NN - the length of the array AA.
// The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA 

// Output Format
// For each test case, output two space-separated integers on a new line the minimum and maximum interesting value over all subarrays for the given array.


 
// The sum of NN over all test cases won't exceed 3 \cdot 10^53⋅10 
// 5
//  .
// Sample 1:
// Input

// 2
// 2
// 2 2
// 3
// 5 0 9
// Output         // 4 4
                  // 0 81
// Explanation:
// Test case 11: The minimum interesting value possible is 44. A subarray with interesting value equal to 44 is [2,2][2,2]. Here, both minimum and maximum elements of the subarray are 22. It can be proven that no subarray of the array has interesting value less than 44.
// The maximum interesting value possible is 44. A subarray with interesting value equal to 44 is [2,2][2,2]. Here, both minimum and maximum elements of the subarray are 22. It can be proven that no subarray of the array has interesting value greater than 44.

// Test case 22: The minimum interesting value possible is 00. A subarray with interesting value equal to 00 is [5, 0, 9][5,0,9]. Here, minimum element is 00 and maximum element is 99. It can be proven that no subarray of the array has interesting value less than 00.
// The maximum interesting value possible is 8181. A subarray with interesting value equal to 8181 is [9][9]. Here, both minimum and maximum elements of the subarray are 99. It can be proven that no subarray of the array has interesting value more than 8181.




// APPROACH

// dkho major mistake meri ye th ki hum integer mein leke chal rhe the but test case harami saale long mein diye hue the 
// isliye long leke chalo wrna int mein answer galaat aayega


#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
       
	    vector<int> vec(n);
      // int maxi=INT_MAX;
       ll  maxi=LLONG_MAX;

      
	    for(auto &i:vec){
	        cin>>i;
      // cout<<i<<" ";
      if(i>=0 && maxi>i)
         maxi=i;
}
        
        // int m2=*min_element(vec.begin(),vec.end());
        // int m1=*max_element(vec.begin(),vec.end());
        ll m2=*min_element(vec.begin(),vec.end());
         ll m1=*max_element(vec.begin(),vec.end());
        if(maxi==INT_MAX)
          cout<<m1*m1<<" "<<m2*m2<<endl;
        else if(m2<0)
            cout<<m1*m2<<" "<<max(m1*m1,m2*m2)<<endl;
        else
           cout<<m2*m2<<" "<<m1*m1<<endl;
}
    

	return 0;
}
// 2
// 2 2
// 3
// 5 0 9
// 4
// 0 2 3 5
// 3
// -7 -6 -1
// 3
// 2 3 5
// 4
// 0 -7 -6 -1
// 7
// -7 -6 -1 0 2 3 5
// 6
// -7 -6 -1 2 3 5                                                                                                            OUTPUT                                                                                                                                                                                                  4 4
// 0 81
// 0 25
// 1 49
// 4 25
// 0 49
// -35 49
// -35 49 

// firstly yhi logic built kiya tha maine but TLE aagya tha ye o(n^2) lerha tha time toh agr tm long bi loge to bhi same TLE dkhega


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
       
	    vector<int> vec(n);
         int maxi=INT_MIN, mini =INT_MAX;
	    for(auto &i:vec)
	        cin>>i;
	    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            int m1=vec[i]*vec[j];
            maxi=max(maxi,m1);
            mini=min(mini,m1);

        }
        }
    
        cout<<mini<<" "<< maxi<<endl;

	}
	return 0;
}