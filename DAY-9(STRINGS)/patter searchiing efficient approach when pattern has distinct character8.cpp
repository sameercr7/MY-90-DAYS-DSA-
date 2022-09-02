// Given a pattern with distinct characters and a text, we need to print all occurrences of the pattern in the text. 
// This video talks about improved Naive pattern searching with Theta(n) time complexity

// approach
// it has O(n) complexity as it is jumping rather than going one by one
// has 3 most important condiiton and for loop whithout i++
// 1-if(j==m) that means pattern is found
// 2-if(j==0) means first element is not matching so just increase i
// 3-lst condiiton mean j in between didnt match so now take jump i=i+j
#include<bits/stdc++.h>
using namespace std;
void patSearchinng(string &txt,string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);  ){
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        
        if(j==m)
        cout<<i<<" ";
        if(j==0){
        i++;}
        else{
        i=(i+j);}
    }
}
 
int main() 
{ 
    string txt = "ABCABCD";string pat="ABCD";
    cout<<"All index numbers where pattern found:"<<" ";
    patSearchinng(txt,pat);
    
    return 0; 
} 