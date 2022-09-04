// Rabin karp

#include<bits/stdc++.h>
using namespace std;
// ismein semicoloumn ni hoga
// q smjha diya kyn lgya h
// d jo h rolling hash ke concept keliye lgya hua h

#define d 256
const int q=101;
int main() 
{ 
    string txt="GEEKS FOR GEEKS",pat="GEEK";
    int m=pat.size();
    int n=txt.size();
    // for calculating hash
    int h=1;
    for(int i=0;i<m-1;i++)
       h=(h*d)%q;

     // Calculate the hash value of pattern and first 
    // window of text 
    int p=0,t=0;
    for(int i=0;i<m;i++)
      {
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
      }

    //   now check krna h ki p aur t khna equal h
    // loop (n-m) tk chalega

    for(int i=0;i<=(n-m);i++){
        if(p==t){
            bool flag=true;
            for(int j=0;j<m;j++)
              if(pat[j]!=txt[i+j]){
                  flag=false;
                  break;
              }
            if(flag==true)
              cout<<i<<" ";
        }

        // if p==t ke ni hua to hum slide krenge ab
        // mtlb t nikalenge kynki p to same hi rhega
        if(i<n-m)
        {
            // abdul bari ka ss dkhlena smjh aajayega
            // we are doing  modulo taaki overflow na ho

            t=((d*(t-txt[i]*h))+txt[i+m])%q;
        }
        if(t<0)
        t=t+q;

    }
    
    return 0; 
} 