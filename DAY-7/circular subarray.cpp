// Input: a[] = {5,-2,3,4}
// Output: 12
// normal subarray ({10},{5},{-5},{10,5},{5,-5},{10,5,-5})
// only circular subarry {5,-5,10},{-5,10},{-5,10,5}
// naive solution
// j loop will stat form 1 as we are using modulo operator (i+j)%n
// phle sare start with i se maximum nikalo then usko result wale max mein daalo taaki max circular subarray mile

#include<bits/stdc++.h>
using namespace std;
int circulararray(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++){
        
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++){
                int index=(i+j)%n;
                curr_sum+=arr[index];
                curr_max=max(curr_max,curr_sum);
        }
        res=max(res,curr_max);
        }
        return res;
    }
int main(){
    int arr[] = {5,-2,3,4};
    int n=4;
    int d=circulararray(arr,n);
    cout<<d;

}
// efficient approach
// time complexity O(n)
// using kadan algorithm wich is modidifed somewhat
// we will compute first normalmaxsum, and then we wil subtract the minimum sum from that
// to get max circular subarray sum
// we will invert array and when we are finding maximum then we actuallly calculating minimum sum
// arr={-5,-3}
// max_normal=-3 arr_sum=-11 arr{8,3} max_circulat=-11+11=0  res=max(3,0)
#include<bits/stdc++.h>
using namespace std;
int normalsum(int arr[],int n)
{
    int res=arr[0],maxending=arr[0];
    for(int i=0;i<n;i++){
        maxending=max(arr[i],arr[i]+maxending);
        res=max(res,maxending);
        }
        return res;
    }
int overallmaxsum(int arr[],int n){
    int max_normal=normalsum(arr,n);
    // this codition is most important if this will not there so you will landup  with result 0

    if(max_normal<0)
        return max_normal;
    // section for ciccular array
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
        // invert the array
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+normalsum(arr,n);
    return max_circular;
}
int main(){
    int arr[] = {5,-2,3,4};
    int n=4;
    int d=overallmaxsum(arr,n);
    cout<<d;

}

