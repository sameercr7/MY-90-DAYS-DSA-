// link-https://leetcode.com/problems/minimum-window-substring/submissions/
// youtube link-https://www.youtube.com/watch?v=3Bp3OVD1EGc

// step-1 form a map of string t 
// step -2 now start from i=0,j=0 in string s....
// also take required count which is our key to solve this question
// move j until requirecount is 0 that states that we found the window in String S of t...
// also increase the freq of element by -1,.....and required count-- as to ,ake count 0...so that we find the next window
// now we have to shrink the current window 
// for shirinking move i to the next element where count increase by 1...or we can say that find that next element which is present in string T
// while shirnking just increase the frequncy of that element in A ...if that element is present in T then count will be afeected and if not present it will not affect count
// 


class Solution {
public:
    string minWindow(string s, string t) {

  int n=s.size(),m=t.size(),mini=INT_MAX,start=0;
      int  requiredcount=m;
//   obvious case if size of string T > string S then we cannot find the minimum substrng so return ""
  if(m>n)
    return "";
  unordered_map<char,int> mp;
  for(auto it:t)
     mp[it]++;
  

  int i=0,j=0;
  while(j<n){
    char ch=s[j];
    
    if(mp[ch]>0)
       requiredcount--;
    mp[ch]--;

    // section for shrinking

    while(requiredcount==0){

        // now find the minimum window length
        if(mini>j-i+1){
            // miniwindow is for length of window
          mini=j-i+1;
        //   start starting position of that minimum window
          start=i;
        }
   char ch1=s[i];
   mp[ch1]++;
   if(mp[ch1]>0)
      requiredcount++;
   i++;


    }

    // most important line to increase j ....means to find next elemnt for which required count becomes ZERO

    j++;
       
  }
   cout<<start<<" "<<mini;     
  return mini==INT_MAX ? "" : s.substr(start,mini);
    }
};