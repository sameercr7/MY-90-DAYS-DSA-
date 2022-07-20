// MAXIMUM SUBARRAY
// //time complexity is o(n^2)
//space complexity is o(1)
// naive approach
int maxSum(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int current=0;
        for(int j=i;j<n;j++)
        {
            current=current+arr[i];
            res=max(res,current);
        }
    }
    return res;
}
