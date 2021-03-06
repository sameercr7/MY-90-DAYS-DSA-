// maximum Difference
// time complexity O(n^2)
// space compelexity O(1)
// naive approach
// e.g {2,3,10,6,4,8,1}
// just take thge first difference and comapre it with all
#include<bits/stdc++.h>
using namespace std;
int maxDifff=(int arr[],int n)
{
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i])

        }
    }
    cout<<res;
}
// time complexity O(n)
// space compelexity O(1)
//efficinet approach
// we use minimum value in which we take first value of an array as first value

int maxDifff=(int arr[],int n)
{
int res=arr[1]-arr[0];
int minimumvalue=arr[0];
// as j start wit 1 bcoz we already have taken first value as minimum vale

for(int j=1;j<n;j++){
    //very imp arr[j]-minimumvalue
    res=max(res,arr[j]-minimumvalue)
    minimumvalue=min(minimumvalue,arr[j])
}
cout<<res;
}