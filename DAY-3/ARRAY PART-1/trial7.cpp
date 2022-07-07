//left rotate an  array by one
//simple approach
// time complexity O(n)
// space compelexity O(1)
//i/p {1,2,3,4,5} o/p {2,3,4,5,1}
void lrotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i]
    }
    arr[n-1]=temp;
}
//left rotate an  array by d
// time complexity O(nd)
// space compelexity O(1)
//just use the function of left rotate array by one to call
void lrotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i]
    }
    arr[n-1]=temp;
}
void leftrotate(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
{
    lrotate(arr,n)
}
}
//better approach
// time complexity O(n)=O(d+n-d+d)
// space compelexity O(d)
void leftrotate(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i]=arr[i];
        //this loop for rotation by d
    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];
       //replacing temp with original array value by (n-d+i)
    for(int i=0;i<d;i++)
       arr[n-d+i]=temp[i]
}
//REVERSAL algorithm
//this has three parts
//1st - reverse(arr,0,d-1)
//1st - reverse(arr,d,n-1)
//1st - reverse(arr,0,n-1)
// time complexity O(n)=O(d+n-d+n)=O(2n)
// space compelexity O(1)



void rotate(int arr[].int n,int d){


        reverse(arr,0,d-1)
        reverse(arr,d,n-1)
        reverse(arr,0,n-1)
}
void reverse(int arr[],int low,int high){
    while(Low<high){
        swap(arr[low],arr[high])
        low++;
        high--;

    }
}