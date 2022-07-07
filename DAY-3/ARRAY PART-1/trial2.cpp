//naive approach of 2nd largest number
//function within function 
#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n){
    
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[largest])
            largest=i;
    cout<<arr[largest];
    cout<<endl;

   for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
            res=i;
            else if(arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

int main(){
    int arr[]={5,20,12,20,10};
    cout<<secondlargest(arr,5);
    return 0;
}