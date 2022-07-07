//FREQUENCY IN SORTED ARRAY
//NAiVE APPROACH
//Time Complexity: O(n)
//Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]={10,10,10,30,30,40};
    int n=6;
    int freq=1,i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
            cout<<"previous value of i"<<i;

        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        cout<<"updated value of i"<<i;
        
        i++;
        freq=1;

    }
    //this is for the end case(when last element is not same as previous one then this condition will excecute)
    
    //like 10,10,10,30,30,40 here 40!=30 
    if(n==1 || arr[n-1]!=arr[n-2])
       cout<<arr[n-1]<<" "<<1;
 }


//if array is not sorted
//then use unordered map concept from striver
//Time Complexity: O(n)
//Space Complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
         m[arr[i]]++;
    for(auto x:m)
         cout<<x.first<<" "<<x.second<<endl;
}
