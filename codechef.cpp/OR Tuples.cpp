// Chef has 3 numbers P,Q and R. Chef wants to find the number of triples (A, B, C) such that:

// (A \mid B) = P,(A∣B)=P, (B \mid C) = Q(B∣C)=Q and (C \mid A) = R(C∣A)=R (Here, \mid∣ denotes the bitwise OR operation)
// 0 \le A, B, C \lt 2^{20}0≤A,B,C<2 
// 20
 
// Can you help Chef?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line of input containing 33 space-separated integers denoting P, QP,Q and RR respectively.
// Output Format
// For each test case, output a single integer denoting the number of triplets (A, B, C)(A,B,C) that satisfy the given conditions.

// Constraints
// 1 \leq T \leq 10^51≤T≤10 
// 5
 
// 0 \leq P, Q, R \lt 2^{20}0≤P,Q,R<2 
// 20
 
// Sample 1:
// Input
// Output
// 3
// 10 12 14
// 0 5 5
// 0 0 7
// 4
// 1
// 0
// Explanation:
// Test case 11: The following 44 triplets (A, B, C)(A,B,C) satisfy A \mid B = 10, B\mid C = 12,A∣B=10,B∣C=12, and C\mid A = 14C∣A=14: (2, 8, 12), (10, 0, 12), (10, 8, 4),(2,8,12),(10,0,12),(10,8,4), and (10, 8, 12)(10,8,12).

// Test case 22: The following triplet (A, B, C)(A,B,C) satisfies A \mid B = 0, B\mid C = 5,A∣B=0,B∣C=5, and C\mid A = 5C∣A=5: (0, 0, 5)(0,0,5).

// Test case 33: There are no triplets satisfying all the conditions.


problem link - https://www.codechef.com/submit/ORTUPLES?tab=statement

approach 
bus  1count krlo kitne h

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q,r;
	    cin>>p>>q>>r;
	    long  long ans=1;
	   for(int i=0;i<=20;i++){
	        int mask=1<<i;
	       int c=0;
	    //   ye c+= wali line p q r mein 1 count krne keliye hi h
	       c+=(p & mask)!=0;
	       c+=(q & mask)!=0;
	       c+=(r & mask)!=0;
	       if(c==0)
	         ans*=1;
	       else if(c==1)
	         ans*=0;
	       else if(c==2)
	         ans*=1;
	       else
	           ans*=4;
	   }
	   cout<<ans<<endl;
	}
return 0;
}
