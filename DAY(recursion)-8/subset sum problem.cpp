// SUBSET SUM PROBLEM
// Given an array arr[] of length N and an integer X, the task is to find the number of subsets with a sum equal to X.

// Examples: 

// Input: arr[] = {1, 2, 3, 3}, X = 6 
// Output: 3 
// All the possible subsets are {1, 2, 3},  {1, 2, 3} and {3, 3}

// Input: arr[] = {1, 1, 1, 1}, X = 1 
// Output: 4 
// jus ek hi cheez nayi h wo bi  ki add waali baaki
// ques ko 2 sec mein divide krlo....first ye ki aif we include that no then sum remains same and we don;t then sum-arr[n-1]

#include <bits/stdc++.h>
using namespace std;
int countSubsets(int arr[], int n, int sum)
{
	if(n==0)
		return sum==0? 1 : 0;

	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}


int main() {
    
    	int n = 3, arr[]= {10, 20, 15}, sum = 25;
    	
    	cout<<countSubsets(arr, n, sum);
    	
    	return 0;
}

// THIS IS ALSO THE SUBSET PROBLEM JUST WE HAVE TO PRINT ALL THE SUBSETS IN ASCENDING ORDER
// Input:
// N = 2
// arr[] = {2, 3}
// Output:
// 0 2 3 5
// Explanation:
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then 
// Sum = 2+3 = 5.


// in this we have to reverde so 
// time complexity 2^n
// space complexity 2^nlog(n)


//  link for striver sheet solution in c++  https://github.com/striver79/SDESheet/blob/main/SubsetSumsC%2B%2B
public: 
    void func(int ind, int sum,vector<int> &arr, int N, vector<int> &sumSubset) {
        if(ind == N) {
            sumSubset.push_back(sum); 
            return; 
        }
        
        // pick the element 
        func(ind + 1, sum + arr[ind], arr, N, sumSubset); 
        
        // Do-not pick the element
        func(ind + 1, sum, arr, N, sumSubset);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset; 
        func(0, 0, arr, N, sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }




    // just approach for the solution of geeks for geeks
    // link https://practice.geeksforgeeks.org/problems/subset-sums2234/1

// my solution wil, be there