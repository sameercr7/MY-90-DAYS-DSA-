//removing duplicates form a sorted array
// naive approach
// time complexity O(n)
// space compelexity O(n)
//take an empty array of same size
int removedupli(int arr[],int n){
    int temp[n];
    //foorst variable will be same as of original array

    temp[0]=arr[0];
    //res as a pointer for comaparing
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;

        }
    }
    //now just copy the arrays from temp to original array

    for(int i=0;i<res;i++)
    arr[i]=temp[i];
    return res;
}

//efficient approach
// time complexity O(n)
// space compelexity O(1)
//just compare it with previous element in array and reuse it
int removedupli(int arr[],int n){
   
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            temp[res]=arr[i];
            res++;
      }
    }
    }