Good Pairs
Problem
You are given an array A of length N.

problem link-https://www.codechef.com/SEP221D/problems/EQPAIR

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<long> vec(n);
	    map<long,long> mp;
	    for(auto &i:vec){
	       cin>>i;
	       mp[i]++;
	    }  
	    ll t1=0;
	    for(auto it:mp){
	        if(it.second>1)
	           t1+=it.second*(it.second-1)/2;
	    }
	    cout<<t1<<endl;
	          
	}
	return 0;
}
