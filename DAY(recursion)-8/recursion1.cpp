// palindrome using recursion
//time complexity O(n)
// space comlexity O(n)
#include<bits/stdc++.h>
using namespace std;
bool pallindrom(string &str,int start,int end){
    
  
if(start>=end)
   return true;
// main line is this
return (str[start]==str[end]) && pallindrom(str,start+1,end-1);

}
int main(){
    int n;
    cin>>n;
     string str = "geeks";
    int start=0;
    int end=n-1;
    if(pallindrom(str,start,end))
         cout<<"yes";
    else
       cout<<"no";
return 0;
}