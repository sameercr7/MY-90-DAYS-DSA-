//   problem link-https://leetcode.com/problems/third-maximum-number/
  
  int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // unique(taaki duplicatae hat jaaye whnaa se)
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        reverse(nums.begin(),nums.end());
        if(nums.size()<3)
            return nums[0];
        return nums[2];
    }

    // simple approach
     

// Algorithm: 
// First, iterate through the array and find maximum.
// Store this as first maximum along with its index.
// Now traverse the whole array finding the second max, excluding the maximum element.
// Finally traverse the array the third time and find the third largest element i.e., 
// excluding the maximum and second maximum.

// C++ program to find third Largest
// element in an array of distinct elements

// Complexity Analysis: 
// Time Complexity: O(n). 
// As the array is iterated thrice and is done in a constant time
// Space complexity: O(1). 
// No extra space is needed as the indices can be stored in constant space.

#include <bits/stdc++.h>

void thirdLargest(int arr[], int arr_size)
{
	/* There should be atleast three elements */
	if (arr_size < 3)
	{
		printf(" Invalid Input ");
		return;
	}

	// Find first largest element
	int first = arr[0];
	for (int i = 1; i < arr_size ; i++)
		if (arr[i] > first)
			first = arr[i];

	// Find second largest element
	int second = INT_MIN;
	for (int i = 0; i < arr_size ; i++)
		if (arr[i] > second && arr[i] < first)
			second = arr[i];

	// Find third largest element
	int third = INT_MIN;
	for (int i = 0; i < arr_size ; i++)
		if (arr[i] > third && arr[i] < second)
			third = arr[i];

	printf("The third Largest element is %d
", third);
}

/* Driver program to test above function */
int main()
{
	int arr[] = {12, 13, 1, 10, 34, 16};
	int n = sizeof(arr)/sizeof(arr[0]);
	thirdLargest(arr, n);
	return 0;
}
// Efficient Approach: 
// The problem deals with finding the third largest element in the array in a single traversal. 
// The problem can be cracked by taking help of a similar problem- finding the second maximum element. 
// So the idea is to traverse the array from start to end and to keep track of the three largest elements up to that index (stored in variables).
//  So after traversing the whole array, the variables would have stored the indices (or value) of the three largest elements of the array.
 

// Algorithm: 
// Create three variables, first, second, third, to store indices of three largest elements of the array. (Initially all of them are initialized to a minimum value).
// Move along the input array from start to the end.
// For every index check if the element is larger than first or not. Update the value of first, if the element is larger, and assign the value of first to second and second to third. 
// So the largest element gets updated and the elements previously stored as largest becomes second largest, and the second largest element becomes third largest.
// Else if the element is larger than the second, then update the value of second,and the second largest element becomes third largest.
// If the previous two conditions fail, but the element is larger than the third, then update the third.
// Print the value of third after traversing the array from start to end


// C++ program to find third 
// Largest element in an array
#include <bits/stdc++.h>
  
void thirdLargest(int arr[], int arr_size)
{
    /* There should be atleast three elements */
    if (arr_size < 3)
    {
        printf(" Invalid Input ");
        return;
    }
  
    // Initialize first, second and third Largest element
    int first = arr[0], second = INT_MIN, third = INT_MIN;
  
    // Traverse array elements to find the third Largest
    for (int i = 1; i < arr_size ; i ++)
    {
        /* If current element is greater than first,
           then update first, second and third */
        if (arr[i] > first)
        {
            third  = second;
            second = first;
            first  = arr[i];
        }
  
        /* If arr[i] is in between first and second */
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        /* If arr[i] is in between second and third */
        else if (arr[i] > third)
            third = arr[i];
    }
  
    printf("The third Largest element is %d
", third);
}
  
/* Driver program to test above function */
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    thirdLargest(arr, n);
    return 0;
}