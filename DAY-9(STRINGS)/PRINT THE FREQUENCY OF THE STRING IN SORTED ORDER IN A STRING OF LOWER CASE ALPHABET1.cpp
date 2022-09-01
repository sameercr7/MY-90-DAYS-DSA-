// PRINT THE FREQUENCY OF THE STRING IN SORTED ORDER IN A 
// STRING OF LOWER CASE ALPHABET

// o/p : 
// e 4
// f 1
// g 2
// k 2
// o 1
// r 1
// s 2


// to find the index just substract from a string-'a'=index
// now to print the string in acending order we need index
    // so again use the same formulae string=index+'a'


#include<bits/stdc++.h>
using namespace std;
int main(){
    string stri="geeksforgeeks";
    vector<int> vec(26,0);
    for(int i=0;i<stri.size();i++){
        
        vec[stri[i]-'a']++;

    }
    // 
    for(int i=0;i<26;i++){
        if(vec[i]>0)
          cout<<char(i+'a')<<" "<<vec[i]<<endl;
    }
}
