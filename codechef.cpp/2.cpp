// Array Equality
// Problem
// Chef has an array of NN integers. Chef can rearrange this array in any manner.

// Chef doesn’t like the array if any two adjacent elements are equal. Determine whether there exists a rearrangement of the array that Chef likes.

// Input Format
// The first line will contain TT - the number of test cases. Then the test cases follow.
// First line of each test case contains a single integer NN - size of the array AA.
// Second line of each test case contains NN space-separated integers - denoting the elements of array AA.
// Output Format
// For each test case, if Chef can like any rearrangement of the array print YES, otherwise print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings yes, yEs, YeS, and YES will all be treated as identical).
// i/p o/p
// 2
// 5
// 1 1 1 1 1
// 3
// 3 3 4
// No
// Yes


// approach
// find the freuqncy of majority element so that we can place it at a alternate posootion
// if count is >(n+1)/2 then we can't have that value
// this is using hash map
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	map<int,int> mappy;
	for(int i=0;i<t;i++){
	    cin>>n;
	    mappy.clear();
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        mappy[m]++;
	    }
	    int maxi=0;
	    for(auto it:mappy)
	        maxi=max(maxi,it.second);
	    
	    if(maxi>(n+1)/2)
	        cout<<"no"<<endl;
	    else
	        cout<<"yes"<<endl;
	}
	return 0;
}












