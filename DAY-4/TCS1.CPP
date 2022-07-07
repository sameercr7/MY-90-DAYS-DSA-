//Find the smallest element in an array
//Time Complexity: O(N*log(N))
//Space Complexity: O(1)


#include<bits/stdc++.h>
using namespace std;
int sorty(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main(){
    vector<int> m1={2,5,3,1,0};
    vector<int> m2={2,55,35,14,10};
    cout<<"smalles number:"<<sorty(m1)<<endl;
    cout<<"smalles number:"<<sorty(m2);

return 0;

}

//efficient approach
//Time Complexity: O(N)
//Space Complexity: O(1)

#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
//main segment is this only
int SmallestElement(int arr[], int n) {
 
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int min = SmallestElement(arr1, n);
  cout << "The smallest element in the array is: " << min << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  min = SmallestElement(arr2, n);
  cout << "The smallest element in the array is: " << min;
  return 0;
}




