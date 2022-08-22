
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    cin>>n;
        map<int,int> mappy;
	    for(int i=0;i<n;i++){
            cin>>m;
	        mappy[m]++;
        	}
	    for(auto k:mappy){
	       if(k.second %2!=0){
	          cout<<k.first<<endl;
	           break;
	    
	}
	
	}}
	return 0;
}
