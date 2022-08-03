#include<bits/stdc++.h>
using namespace std;
void pallindrome(int n){
  
   int s=0,temp=n;
   while(n!=0){
    int r=n%10;
    s=10*s+r;
    n=n/10;
   }
   cout<<s;
   
   if(temp==s)
       cout<<"no is pallindrome";
    else
       cout<<"no is not a pallindrome";

}
int main(){
    
    int p;
     cin>>p;
     int l=p;
     pallindrome(p);
     
       return 0;
}

