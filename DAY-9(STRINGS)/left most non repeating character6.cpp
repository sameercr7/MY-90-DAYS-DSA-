// LEFT MOST NON REPEATING CHARACTER


// approach
// use two loop just same as repeating characters
// time complexity O(n^2)
// space complexity O(1)

#include <bits/stdc++.h> 
using namespace std; 


int nonRep(string &str) 
{
    for(int i=0;i<str.length();i++){
        bool flag=false;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)return i;
    }
    return -1;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonRep(str)<<endl;  
    
    return 0; 
}

// optimal approach
// time complexity O(n+char)
// space complexity O(char)

// make vector of zeroes
// now whose value will be == 1 that is non repeating characters


#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int nonRep(string &str) 
{
    vector<char> vec(256,0);
    for(int i=0;i<str.length();i++){
        vec[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(vec[str[i]]==1)
           return i;
    }
    return -1;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonRep(str)<<endl;  
    
    return 0; 
} 

LAST but most EFFICIENT APPROACH


// time complexity O(n+char)
// space complexity O(char)


approach last


#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int nonRep(string &str) 
{
    vector<int> vec(256,-1);
    
    for(int i=0;i<str.length();i++){
        if(vec[str[i]]==-1)
        vec[str[i]]=i;
        // this is the main step different from left most repeating character
        // in this if we do the same then we will have their index so to avoid that
        // we assign -2 to the character who is repeating more than once
        else
        vec[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++){
         // now we will check for those whose value is ggreater than 0 I mean positive ones
        if(vec[i]>=0)
           res=min(res,vec[i]);
    }
    return (res==INT_MAX)?-1:res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonRep(str)<<endl;  
    
    return 0; 
} 