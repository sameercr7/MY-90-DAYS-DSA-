// remove the vowel from the string


// C++ program to remove vowels from a String
#include <bits/stdc++.h>
using namespace std;
 
string remVowel(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U'};
     
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(),
                      str[i]) != vowels.end())
        {
//             str1.replace(pos,len,str2);  
// Parameters
// str : str is a string object, whose value to be copied in another string object.
// pos : pos defines the position, whose character to be replaced.
// len : Number of characters to be replaced by another string object.
// subpos : It defines the position of the first character of string object that is to be copied to another object as replacement.
// sublen : Number of characters of string object to be copied into another string object.
// n : Number of characters to be copied into an another string object.
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}
 
// Driver Code
int main()
{
    string str = "leetcodeisacommunityofcoders";
    cout << remVowel(str) << endl;
 
    return 0;
}