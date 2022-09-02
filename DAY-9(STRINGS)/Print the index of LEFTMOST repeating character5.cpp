// Print the index of LEFTMOST repeating character


// Time complexity=O(n^2)
// space compexity=O(1)
// NAIVE APPROACH
// simple use two for loops and check 
#include <bits/stdc++.h> 
using namespace std; 


int leftMost(string &str) 
{
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j])return i;
        }
    }
    return -1;
}
 
int main() 
{ 
    string str = "abccbd";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 

// optimal approach
// Time complexity=O(n)
// space compexity=O(char+n)
// // one for loop for visiting wala natak krne keliye
// 2nd for loop for printing that left most who is present more than 1.....>1


#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    vector<char> vec(256,0);
    for(int i=0;i<str.length();i++){
        vec[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(vec[str[i]]>1)
            return i;
    }
    return -1;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 

// EFFICIENT APPROACH -1

// take character array an initiliaze it with -1 instead  with zero
// only one loop
// Time complexity=O(n)
// space compexity=O(char+n)

#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{

    int mini=INT_MAX;
    vector<char> vec(256,-1);
    for(int i=0;i<str.length();i++){
        int indi=vec[str[i]];
        if(indi==-1)
           vec[str[i]]=i;
           
        else
           mini=min(mini,indi);

    }
    
  return (mini==INT_MAX)?-1:mini;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 


// BEST AND EFFICIENT APPROACH -2

// Use bool array initialize it with false
// in this we travel from right to left
// if it is found then res=i
// So a/c to thi solution as we are traversing from rifght to left last element we get  leftmost repeating character


#include <bits/stdc++.h> 
using namespace std; 


int leftMost(string &str) 
{
    vector<bool> vec(256,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(vec[str[i]])
           res=i;
        else
           vec[str[i]]=true;
    }
    
    return res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 