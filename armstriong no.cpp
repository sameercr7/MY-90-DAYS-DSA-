#include<bits/stdc++.h>
using namespace std;
int armstrong(int h){
    int c=0,k=h;
    while(h!=0){
        int r=h%10;
        c+=r*r*r;
        h=h/10;

    }
    if(c==k)
      cout<<"yes";
    else
       cout<<"no";
}

int main()
{
   int a,d;
   cin>>a;
   armstrong(a);
  
   return 0;
}
