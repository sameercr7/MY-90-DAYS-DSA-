// 948. Bag of Tokens
// Medium


// Share
// You have an initial power of power, an initial score of 0, and a bag of tokens where tokens[i] is the value of the ith token (0-indexed).

// Your goal is to maximize your total score by potentially playing each token in one of two ways:

// If your current power is at least tokens[i], you may play the ith token face up, losing tokens[i] power and gaining 1 score.
// If your current score is at least 1, you may play the ith token face down, gaining tokens[i] power and losing 1 score.
// Each token may be played at most once and in any order. You do not have to play all the tokens.

// Return the largest possible score you can achieve after playing any number of tokens.

 

// Example 1:

// Input: tokens = [100], power = 50
// Output: 0
// Explanation: Playing the only token in the bag is impossible because you either have too little power or too little score.
// Example 2:

// Input: tokens = [100,200], power = 150
// Output: 1
// Explanation: Play the 0th token (100) face up, your power becomes 50 and score becomes 1.
// There is no need to play the 1st token since you cannot play it face up to add to your score.
// Example 3:

// Input: tokens = [100,200,300,400], power = 200
// Output: 2
// Explanation: Play the tokens in this order to get a score of 2:
// 1. Play the 0th token (100) face up, your power becomes 100 and score becomes 1.
// 2. Play the 3rd token (400) face down, your power becomes 500 and score becomes 0.
// 3. Play the 1st token (200) face up, your power becomes 300 and score becomes 1.
// 4. Play the 2nd token (300) face up, your power becomes 0 and score becomes 2.



// problem link - https://leetcode.com/problems/bag-of-tokens/

// Approach
// twopointers,greedy,sorting;
// hume score ko maximum krna h isisliye jb score =1 ho tb power ko max krne ki koshish kro....uska ek hi way ki 
// max power se minus krdoo
// aur ans iisliye liya taaki bus score calculate ho ske

// space complexity=O(1)
// time complexity=O(nlog(n))+o(n)

#include<bits/stdc++.h>
using namespace std;
int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0, ans=0;
        sort(tokens.begin(),tokens.end());
        // dkho tmhe confusion hota h ki left<=right rkhe ya 
		// left<right rkhe ....dkho agr tm right=tokens.size()-1 ye krte ho toh = lgana padega
        int left=0,right=tokens.size()-1;
        while(left<=right)
        {
            if(tokens[left]<=power)
            {
               score++;
                if(ans<score)
                    ans=score;
                power=power-tokens[left];
            // we canuse max function also
                // maxi=max(maxi,score);
                left++;
                
            }
            else if(score>0)
            {
                power=power+tokens[right];
                score--;
                right--;
            }
            else{
                break;
            }
            
            
        }
        return ans;
}
int main() {
	
	vector<int> tokens={100,200,300,400};
	int power=200;
	cout<<bagOfTokensScore(tokens,power);
	return 0;
}
