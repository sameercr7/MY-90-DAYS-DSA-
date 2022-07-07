//leader in array
//NAOVE APPROACH
//Time Complexity: O(n^2)
//Space Complexity: O(1)
//i/p={7,10,4,10,6,5,2}
  void leader(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){

   
               flag=true;
               break;
            }
        }
        if(flag==false)
          cout<<arr[i];
    } 
  }
  //EFFICIENT APPROACH
  //Time Complexity: O(n)
//Space Complexity: O(1)
//TRAVERSe ARRAY FORM RIGHT afterwad we can reverse it then space complexity will be o(n)

 void leader(int arr[],int n){
    //last right most element will be leader always

    int current=arr[n-1];
    for(int i=n-2;i<n;i++){
        if(current<arr[i])
           {
            current=arrr[i];
            cout<<current;
           }
       }
 }