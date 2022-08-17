// MINIMUM GROUPS REQUIRED TO FLIP
// efficient approach
// time complexity O(n)
// second group hi always be there to flip so just identify the group
//  last if is for the case if last and first are not same
//  0011001101
//  i=1:
// i=2: from 2 to 
// i=3:
// i=4:3(newline)
// i=5:
// i=6: form 6 to
// i=7:
// i=8: 7(newline)
#include<bits/stdc++.h>
using namespace std;
void minimumflips(int arr[],int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i-1]){
            
            // always compare it with arr[0] so this confirms that element is differ which is to be flipped

            if(arr[i]!=arr[0])
                cout<<"from"<<i<<"to";
            else
               cout<<""<<i-1<<endl;
            
        }
    }
    if(arr[n-1]!=arr[0])
       cout<<(n-1)<<endl;
        
         
}

int main(){
    int arr[] = {0,0,1,1,0,0,1,1,0,1};
    int n=10;
    minimumflips(arr,n);
    

}