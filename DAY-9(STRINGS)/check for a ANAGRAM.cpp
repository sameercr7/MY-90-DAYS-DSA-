// check for a ANAGRAM
 
//  ANAGRAM - frequqncy dame honi chahiye sare elements ki aur length/......order matter ni krta h ismein


#include <bits/stdc++.h> 
using namespace std; 
  
bool areAnagram(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
  
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
  
    return (s1==s2); 
} 
 
int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 


// EFFCIENT approach


// we take 256 character ...we can take 26 if all the character are small
// just use a vec as a map

// approach same vector mein usi ko inc kro aur agr doosre mein bi hogi to automatic humne decrrease kr hi rkha h aur last mein vec ke sare element zero nhone chahiye ...ktynki wo aapas mein cancel ho jayenge

// space compleity O(char)
// time complexity O(chan +n)

#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
bool areAnagram(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
    vector<int> vec(256,0);
    for(int i=0;i<s1.length();i++){
        vec[s1[i]]++;
        vec[s2[i]]--;
    }
    
    for(int i=0;i<CHAR;i++){
        if(vec[i]!=0)return false;
    }
    return true;
} 
 
int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 