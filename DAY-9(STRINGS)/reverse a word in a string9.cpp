
// Reverse a word in a string 
// we reversed the words without using extra auxillary space

// approach:
// 1-first we caclcuate end value so that we can have jump of start to End
// 2-basic idea is to first reverse the each word of string then at last reverse the string to get our answer
// 3-two  reverese  are used first one is for last word to be reversed as it cant be reversed simply
// 4-secoond reveerse is for reversing whole string to obtain answer



#include <bits/stdc++.h> 
using namespace std; 

void reverse(string &s,int low, int high){
    while(low<=high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}

void reverseWords(string &s,int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}
 
int main() 
{ 
    string s = "Welcome to Gfg";
    int n=s.size();
    cout<<"After reversing words in the string:"<<endl;
    reverseWords(s,n);
    string t;
    for (int i = 0; i < n; i++) 
        t+=s[i];
    cout<<t<<" ";
        
    
    return 0; 
} 

...............
// 2nd logic if to remove extra spaces (trailing,leading) and have condiiton that  atlease one space in between
// then abpve logic kaam ni aayega shi se
................

// problem link-https://leetcode.com/problems/reverse-words-in-a-string/


#include <bits/stdc++.h> 
using namespace std; 



string reverseWords(string &s,int n){
   reverse(s.begin(),s.end());
   int j=0,i=0;
//    +1 isiliye kynki last wale word ko reverse krne ka yhi way h ek
   while(j<s.size()+1){
    if(s.size()==j || s[j]==' '){
        reverse(s.begin()+i,s.begin()+j);
        // smart move i=j+1 taaki agle baar ke liye begin set ho jaye
        i=j+1;
    }
    j++;
   }
//    Now trim the leading and trailing spaces
// for removing leading spaces
 i=0;
while(s[i]==' '){
    i++;
}
s.erase(s.begin(),s.begin()+i);
// for removing trailing spaces
i=s.size()-1;
while(s[i]==' '){
    i--;
}
s.erase(s.begin()+i+1,s.end());
// for removing extra spaces between the words

for(i=0;i<s.size();i++)
{
    if(s[i]==' '){
        int k=i+1;
        while(s[k]==' '){
            k++;
        }
        s.erase(s.begin()+i+1,s.begin()+k);
    }
}
return s;





}
 
int main() 
{ 
    string s = "Welcome to Gfg";
    int n=s.size();
    cout<<"After reversing words in the string:"<<endl;
    cout<<reverseWords(s,n);
    
    
    return 0; 
} 



