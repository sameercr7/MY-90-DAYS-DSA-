// link-https://leetcode.com/problems/integer-to-roman/
// yourube link-https://www.youtube.com/watch?v=S3QoNsBghec&t=735s
// 2nd youtube link-https://www.youtube.com/watch?v=Rsq1ObYg6ak

 Integer to Roman

class Solution {
public:
    string intToRoman(int num) {
     string ans = "";
     while(num>=1000)
     {
         ans+="M";
         num-=1000;
     }
     if(num>=900)
     {
         ans+="CM";
         num-=900;
     }
     if(num>=500)
     {
         ans+="D";
         num-=500;
     }
     if(num>=400)
     {
         ans+="CD";
         num-=400;
     }
     while(num>=100)
     {
      ans+="C";
      num-=100;
     }
     if(num>=90)
     {
         ans+="XC";
         num-=90;
     }
     if(num>=50)
     {
         ans+="L";
         num-=50;
     }
     if(num>=40)
     {
         ans+="XL";
         num-=40;
     }
     while(num>=10)
     {
         ans+="X";
         num-=10;
     }
     if(num>=9)
     {
         ans+="IX";
         num-=9;
     }
     if(num>=5)
     {
         ans+="V";
         num-=5;
     }
     if(num>=4)
     {
         ans+="IV";
         num-=4;
     }
     while(num>=1)
     {
         ans+="I";
         num-=1;
     }
     return ans;
    }
};



// thoda shi se lkhlo isko 
// this method called substraction method
class Solution {
public:
    string intToRoman(int num) {
        string roman;
        vector<string> notations = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        for(int pos = 0; num>0; ++pos){
            while(num >= value[pos]){
                roman += notations[pos];
                num -= value[pos];
            }
        }
        return roman;
    }
};