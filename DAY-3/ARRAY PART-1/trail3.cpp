<<<<<<< HEAD
//sorted array naive approach 
//use two for
//time complexity is o(n^2)
bool sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
          if(arr[i]>arr[j])
           return false;

    }
    return true;
}


//efficient approach
//time complexity is o(n)
bool sort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
          return false;
    }
    return true;
}

=======
//sorted array naive approach 
//time complexity is o(n^2)
//use two for
bool sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
          if(arr[i]>arr[j])
           return false;

    }
    return true;
}


//efficient approach
//time complexity is o(n)
bool sort(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
          return false;
    }
    return true;
}

>>>>>>> 5c800002a20a931073c1389272d3833f0f1eac38
