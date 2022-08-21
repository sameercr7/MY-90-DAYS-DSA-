// cheff and doll
// in this hashing is used and XOR operation can be used in it
// Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

// Help chef find which type of doll is missing..

// Input
// The first line contains an integer T, the number of test cases.
// The first line of each test case contains an integer N, the number of dolls.
// The next N lines are the types of dolls that are left.

// Output
// For each test case, display the type of doll that doesn't have a pair, in a new line.

// Constraints
// 1<=T<=10
// 1<=N<=100000 (10^5)
// 0<=type<=100000

// Sample 1:

// Output 2
// input
// 1
// 3
// 1 
// 2
// 1


#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    cin>>n;
        // mapping is used
         map<int,int> mappy;
	     for(int i=0;i<n;i++){
             cin>>m;
	         mappy[m]++;
        	}
            // 
	    for(auto k:mappy){
	       if(k.second %2!=0){
	          cout<<k.first<<endl;
	           break;
	    
	}
	
	}}
	return 0;
}
