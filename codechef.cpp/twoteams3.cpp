//  Team of Two Problem Code: TEAMOF2SolvedSubmit
// Your class recently got a maths assignment with 5 questions. There are N(≤20) students in the class and at most 2 people can collaborate. For each student, you know which problems they solved.

// Find out if there exists a team of two students who can together solve all problems.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases. T test cases follow.

// Each of the following test cases contains N+1 lines, where N is the number of students in the class.
// The first line contains a single integer N.
// Each of the following N lines contains Ki+1 positive integers separated by whitespaces.
// In the ith line, the first positive integer Ki is the number of problems the ith student can solve. The next Ki integers are x1,x2,…,xKi, the indices of the problems this student can solve.
// Output Format
// The output must consist of T lines.

// Each line must contain a single string: The solution to the ith test case as a YES or NO (where YES should be returned if some pairing of students is capable of solving all the problems, and NO otherwise).
// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

// Constraints
// 1≤T≤1000
// 2≤N≤20
// 0≤Ki≤5
// 1≤xi≤5
// Sample Input 1 
// 4
// 3
// 1 3
// 1 1
// 4 1 3 4 5
// 2
// 4 2 3 4 5
// 3 1 2 4
// 3
// 1 1
// 1 2
// 1 3
// 2
// 2 1 5
// 3 2 3 4
// Sample Output 1 
// NO
// YES
// NO
// YES

// problem link = https://www.codechef.com/problems-old/TEAMOF2

// bhai vector of vetor kaise print kre wo seekha
// set se hojayega kaam
// vector<vector<int>> vec leliya bus baaki input tha


 #include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
int t;
bool flag;
cin>>t;
while(t--){
    int lines;
    cin>>lines;
    vector<vector<int>> vec(lines);
    for(int i=0;i<lines;i++){
        int ques;
        cin>>ques;
        for(int j=0;j<ques;j++)
           {
            int in;
            cin>>in;
            vec[i].push_back(in);
            
            }
            
           }
// printing of vectors

// for(int i=0;i<vec.size();i++)
// {
// 	for(int j=0;j<vec[i].size();j++)
// 	      cout<<vec[i][j]<<" ";
//     cout<<endl;

// }



    flag=false;
    for(int i=0;i<lines;i++){
        for(int j=i+1;j<lines;j++){
            vector<int> a1=vec[i];
            vector<int> a2=vec[j];
            set<int> setty;
            for(auto it:a1)
               setty.insert(it);
            for(auto it:a2)
               setty.insert(it);
            if(setty.size()==5){
              flag=true;
              break;
            }
        }
    }

if(flag==true)
    cout<<"yes"<<endl;
else
    cout<<"no"<<endl;
        
}
return 0;
}
















