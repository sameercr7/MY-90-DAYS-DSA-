// find the middle using prefix and suffix
// c++|| Super Easy solution with Detailed Explanation
// time cpmplexity=o(n)
// space complexity=o(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr={1,0,1};
	vector<int> prefixSum(3);
	vector<int> suffixSum(3);
	int n=arr.size();
	prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
	for(auto it:prefixSum)
	   cout<<it<<" ";
	cout<<endl;
	suffixSum[n-1] = arr[n-1];
	for(int i=n-2;i>=0;i--){
		suffixSum[i]=suffixSum[i+1]+arr[i];
	}
	for(auto it:suffixSum)
	   cout<<it<<" ";
	cout<<endl;
	//    dkho left most aur right most lene ka koi mtlb ni h theek h
	// isiliye i=1 se  lekr i=n-1
	for(int i=0;i<=n-1;i++){
		if(prefixSum[i]==suffixSum[i])
		   cout<<"middle element"<<arr[i];

	}
	return 0;
}