// find the middle using prefix and suffix

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


// efficient approach

// time cpmplexity=o(n)
// space complexity=o(1)

// approach
// simple just calculate the sum 
// remember this line  rightsum=rs-ls-nums[i];

#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> nums={2,3,-1,8,4};
int n=nums.size(),rs=0;

for(auto it:nums){
   rs+=it;
   cout<<rs<<" ";
}
cout<<endl;
int ls=0,rightsum;
for(int i=0;i<=n-1;i++){
   // this is how we will get the right sum
   // just subtract the ls means left sum till that index 
   // and last subtract that particulart index from where you want to see the partioning

   rightsum=rs-ls-nums[i];
   if(rightsum==ls)
      cout<<i<<endl;
   ls+=nums[i];
}



return 0;
}
