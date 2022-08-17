// MAJORITY ELEMENT
// time complexity O(n)
// NAiVE APPROACH
 
#include<bits/stdc++.h>
using namespace std;
int majorityelement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        int count=1;
        // i+1 loop chalega hmesha
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count>n/2)
           return arr[i];
    }
   
}
int main(){
    int arr[] = {8,7,6,8,6,6,6,6};
    int n=8;
    int d=majorityelement(arr,n);
    cout<<d;

}

// MAJORITY ELEMENT
// efficient approach
// time complexity O(n)
// In this prob divided inot twp sections
// first we find the repeating or majority candidate 
//  then we check the n/2 condition using another for
//
// 
// 
#include<bits/stdc++.h>
using namespace std;
int majorityelement(int arr[],int n)
{
    
        
        int count=1,res=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]==arr[res])
                count++;
            else
               count--;
            if(count==0)
               res=j;
               count=1;
        }
        count=0;
     for(int i=0;i<n;i++)
     {
        if(arr[res]==arr[i])
           count++;
     }        
     if(count<=n/2)
        res=-1;
    return arr[res];    
}

int main(){
    int arr[] = {8,7,6,8,6,6,6,6};
    int n=8;
    int d=majorityelement(arr,n);
    cout<<d;

}