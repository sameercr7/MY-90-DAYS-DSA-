#print the srings in lexicogrtaphic way

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]=m[s]+1;

    }
    for(auto k:m){
        cout<<k.first<<" "<<k.second<<endl;
    }
}