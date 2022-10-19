// link-https://leetcode.com/problems/top-k-frequent-words/
// link-https://www.youtube.com/watch?v=zW-8-6A2gxM


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> arr={"the","day","is","sunny","the","the","the","sunny","is","is"};
    map<string,int> mp;

    for(auto it:arr)
        mp[it]++;
    vector<pair<string,int>> mappy;
    // you have pushed all the values in vector mappy as a pair {{the,4},{is,3}.......}
    for(auto it:mp)
        mappy.push_back({it.first,it.second});
        //     just use the comparator method to sort as we have to compare between the pairs ...when pairs first value is == to pairs2 fitst value then just simply return the lexicographic order that is p1.first<p1.second
    auto comp=[](pair<string,int>& p1,pair<string,int>& p2){
                 if(p1.second==p2.second)
                    return p1.first<p2.first;
                 return p1.second>p2.second;

     };
    sort(mappy.begin(),mappy.end(),comp);
    int k=4;
    vector<string> v(k);
    for(int i=0;i<k;i++)
       v[i]=mappy[i].first;
       //         last loop for just pushing the first value of pair as our answer
    for(int i=0;i<k;i++)
    for(auto it:mappy)
      cout<<it.first<<" "<<it.second<<endl;


 return 0;
}