//stockbuy and sell
//NAIVE APPROACH
//time complexity is o(n^2)
//space complexity is o(1)
// i/p ={1,5,3,8,12}
// o/p 13
// always zero as it is non decreasing order
// i/p ={30,20,10}
//o/p 0
// if in increaseing order the last - first eill be the o/p
// i/p={10,20,30}
// o/p 20
#include<bits/stdc++.h>
using namespace std;
int maximum_profit(int price[],int start,int end){
    if(end<=start){
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++)
       for(int j=i+1;j<=end;j++)
          {
            if(price[j]>=price[i]){
                //we are calling function recursiveley again and again 
                int current_profit=price[j]-price[i]+maximum_profit(price,start,i-1)+maximum_profit(price,j+1,end);
                profit=max(profit,current_profit);
            
            }
          }
          return profit;
}
int main(){
    int price[] = {1,5,3,8,12};
    int p=maximum_profit(price,0,4);
    cout<<p<<endl;
    return 0;
}
//EFFICIENT APPROACH
//time complexity is O(n)
//space complexity is o(1)




