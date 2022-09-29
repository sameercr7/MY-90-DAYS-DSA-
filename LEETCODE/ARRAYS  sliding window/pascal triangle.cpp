// pascal triangle
// link-https://leetcode.com/problems/pascals-triangle/
// striver link-https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/


#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> pascal(int numrows){
  vector<vector<int>> res(numrows);
  for(int i=0;i<numrows;i++){
    // resize is setting container size...and continer means [[],[],[]...so on]
    res[i].resize(i+1);
    res[i][0]=res[i][i]=1;
    // this second loop is for between numbers
    // in this for i=0 i=1 this loop will no run as we don't need to
  for(int j=1;j<i;j++)
    res[i][j]=res[i-1][j-1]+res[i-1][j];
  }
  return res;


}

int main(){
	
	
	int numrows;
  cin>>numrows;
  vector<vector<int>> result; 
  result=pascal(numrows);
  for(int i=0;i<result.size();i++){
    for(int j=0;j<result[i].size();j++){
      cout<<result[i][j];
    }
    cout<<endl;
  }
	
	return 0;
}
