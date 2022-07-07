<<<<<<< HEAD

//return the largest number index in array
//time complexity is  o(n2)
#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[],int n){
  for(int i=0;i<n;i++)
  {
    bool flag=true;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[i])
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    return i;
  }
  return -1;

 
}
int main(){
    int arr[]={5,8,20,10};
    cout<<maximum(arr,4);
    return 0;
}
//efficient approach
//time complexity is O(n)
int maximum(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
        }

        return res;
    
}

=======

//return the largest number index in array
//time complexity is  o(n2)
#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[],int n){
  for(int i=0;i<n;i++)
  {
    bool flag=true;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[i])
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    return i;
  }
  return -1;

 
}
int main(){
    int arr[]={5,8,20,10};
    cout<<maximum(arr,4);
    return 0;
}
//efficient approach
//time complexity is O(n)
int maximum(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
        return res;
    }
}

>>>>>>> 5c800002a20a931073c1389272d3833f0f1eac38
