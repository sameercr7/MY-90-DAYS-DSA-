// intersection of two arrays

#include<bits/stdc++.h>


using namespace std;


int main(){
    unordered_set<int> mp;
    vector<int> v={10,15,20,15,30,30,5};
    vector<int> v1={30,5,30,80};
    for(auto it:v)
       mp.insert(it);
    int c=0;
    for(int i=0;i<v1.size();i++)
    {
        
        if(mp.find(v1[i])!=mp.end()){

            c++;
            mp.erase(v1[i]);
        }
    }
    cout<<c;
    
	return 0;
}