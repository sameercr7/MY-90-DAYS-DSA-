//MAXIMUM DIFFERENCE
//NAiVE APPROACH
//Time Complexity: O(n^2)
//Space Complexity: O(1)
//assign first pair difference in any vaiable  just run two loops for comparing with every elemnt in array
//e.g(2,3,10,6,4,8,1)
int maxdiff(int arr[],int n){
    int res=arr[1]-arr[0];
    //remember it is upto n-1 as we have already used 1 place above

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[i]-arr[j])
        }
    }
    cout<<res;
}
//efficient approach
//just keep track of the previous minimum value
//take min value as starting value of an array
//Time Complexity: O(n)
//consider every elemnent as j
//Space Complexity: O(1)
int maxdiff(int arr[],int n){
    int res=arr[1]-arr[0];
    int minvalue=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minvalue)
        minvalue=min(minvalue,arr[j])

    }
    return res;
}
// new update
