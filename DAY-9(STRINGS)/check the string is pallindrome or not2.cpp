// CHECK THE STRING IS PALINDROME OR NOT
// naive approach
// use reverse then check the string is equal or not
// time complexity =O(n)
//  space complexity=O(n)

// two pointer approach


// but this approach in worst case O(n) wrna O(1) rhegii...space bi O(1) rhegii



#include<bits/stdc++.h>
using namespace std;


    bool fo(string stri){
    int start=0;
    int end=stri.size()-1;
    while(start<end){
        if(stri[start]!=stri[end]){
            return false;
            
        }
        start++;
        end--;
}

return true;
    }

   int main(){
    string h="abcdcba";
    if(fo(h))
      cout<<h<<" "<<endl;
    else
      cout<<"gaand maraoo"<<endl;


    return 0;
}
