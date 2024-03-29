// 2269. Find the K-Beauty of a Number
// Easy
// The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:

// It has a length of k.
// It is a divisor of num.
// Given integers num and k, return the k-beauty of num.

// Note:

// Leading zeros are allowed.
// 0 is not a divisor of any value.
// A substring is a contiguous sequence of characters in a string.

 

// Example 1:

// Input: num = 240, k = 2
// Output: 2
// Explanation: The following are the substrings of num of length k:
// - "24" from "240": 24 is a divisor of 240.
// - "40" from "240": 40 is a divisor of 240.
// Therefore, the k-beauty is 2.
// Example 2:

// Input: num = 430043, k = 2
// Output: 2
// Explanation: The following are the substrings of num of length k:
// - "43" from "430043": 43 is a divisor of 430043.
// - "30" from "430043": 30 is not a divisor of 430043.
// - "00" from "430043": 0 is not a divisor of 430043.
// - "04" from "430043": 4 is not a divisor of 430043.
// - "43" from "430043": 43 is a divisor of 430043.
// Therefore, the k-beauty is 2.
// problem link - https://leetcode.com/problems/find-the-k-beauty-of-a-number/
// Time complexity: O(N^2), where N is the length of the input string.
// Auxiliary Space: O(N), where N is the length of the input string.
.................

// this is the way to calculate substring of any integer 

................
#include<bits/stdc++.h>
using namespace std;
int main(){
   int nums=430043,k=2,c=0;
   string stri=to_string(nums);
 
    // First loop for starting index
    for (int i = 0; i < stri.size(); i++) {
        string subStr;
        
        for (int j = i; j < stri.length(); j++) {
            subStr += stri[j];
            int t=stoi(subStr);
            if(t!=0){
            if(subStr.size()==k && (nums%t==0))
                c++;
            }
        }
    }
    cout<<c;
     return 0;
}
 
using namespace std;
 
void printSubstrings(string str)
{
 
    // First loop for starting index
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            cout << subStr << endl;
        }
    }
}
 
// Driver Code
 
int main()
{
    string str = "abcd";
    printSubstrings(str);
    return 0;
    //    this code is contributed by defcdr
}


// power set using bit manupulation
// help - https://takeuforward.org/data-structure/power-set-print-all-the-possible-subsequences-of-the-string/

include<bits/stdc++.h>
using namespace std;
vector<string> AllPossibleStrings(string s) {
	int n = s.length();
	vector<string>ans;
	for (int num = 0; num < (1 << n); num++) {
		string sub = "";
		for (int i = 0; i < n; i++) {
			//check if the ith bit is set or not
			if (num & (1 << i)) {
				sub += s[i];
			}
		}
		if (sub.length() > 0) {
			ans.push_back(sub);
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}
int main()
{


	string s="abc";
	vector<string>ans = AllPossibleStrings(s);
	//printint all the subsequence.
	cout<<"All possible subsequences are "<<endl;
	for (auto it : ans) {
		cout << it << " ";
	}

}