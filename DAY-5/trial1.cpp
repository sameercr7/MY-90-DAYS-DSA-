// leader in an array
//time complexity is o(n^2)
//space complexity is o(1)
// i/p ={7,20,4,10,6,5,2}
// o/p 10 6 5 2
//naive approach
#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)
        cout<<arr[i];
    }
}
// efficient approach
// in this approach printing is done from right to left as right most will always be a leader
// time complexity is O(n)
void leader(int arr[],int n){
    // just copy the last elemnt in current leade and will be used in comparing

     int current_leader=arr[n-1];
     cout<<current_leader;

    //  loop is very important do see it
    for(int i=n-2;i>=0;i--)
    {
        if(current_leader<arr[i])
        {
            current_leader=arr[i];
            cout<<current_leader;
        }

    }
}