
// LONGEST EVEN ODD SUBARRAY

// Input: a[] = {1, 2, 3, 4, 5, 7, 9} 
// Output: 5 
// naive approach
// res for storing curr for maintaining the count every time it is set to 1 when back and forth matches to be even or odd


#include<bits/stdc++.h>
using namespace std;
int maximum(int a[],int n){
int res=1;
for(int i=0;i<n;i++){
    int curr=1;
    for(int j=i+1;j<n;j++){
        // important line to check back and forthe that no is even or odd
        if((a[j]%2==0 && a[j-1]%2!=0) || (a[j]%2!=0 && a[j-1]%2==0) )
           curr++;
        else
          break;
    }
    res=max(res,curr);
}
return res;
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 7, 9} ;
    int n=7;
    int d=maximum(a,n);
    cout<<d<<endl;
}
// efficient approach
// instead of running two loops we will run only one loop and most imp curr we initialize curr=1 in else part

#include<bits/stdc++.h>
using namespace std;
int maximum(int a[],int n){
int res=1,curr=1;
for(int j=1;j<n;j++){
    if((a[j]%2==0 && a[j-1]%2!=0) || (a[j]%2!=0 && a[j-1]%2==0) )
        {   curr++;
           res=max(res,curr);
        }
        else
          curr=1;
    
}
return res;
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 7, 9} ;
    int n=7;
    int d=maximum(a,n);
    cout<<d<<endl;
}
