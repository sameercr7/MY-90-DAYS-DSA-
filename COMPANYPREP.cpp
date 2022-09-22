




#include<bits/stdc++.h>
using namespace std;

int main() {
 int s=0,e=1;
 
 int n,sum=0,next;
 cin>>n;
 for(int i=0;i<n;i++){
   cout<<s<<" ";
 
   next=s+e;

   s=e;
   e=next;
 }
   

return 0;
}

// C++ Program to check Prime Number
// Difficulty Level : Easy
// Last Updated : 14 Jul, 2022
// Read
// Discuss

// Given a positive integer, check if the number is prime or not.
//  A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. 
//  Examples of the first few prime numbers are {2, 3, 5, Examples:


#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
// Driver Program to test above function
int main()
{
    isPrime(11) ? cout << " true\n" : cout << " false\n";
    isPrime(15) ? cout << " true\n" : cout << " false\n";
    return 0;
}

// pallindrome
#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   


// Factorial Program using loop
// Let's see the factorial Program using loop.

#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   

// Armstrong number
#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   


// swapping without using third variable

#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   

// show abstraction in c++
// here indirectly we are accessing a and b

#include <iostream>
using namespace std;
  
class implementAbstraction
{
    private:
        int a, b;
  
    public:
      
        // method to set values of 
        // private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
  
int main() 
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}


// c++

// OOPS

// We can say that a Class in C++ is a blue-print representing a group of objects which shares some common properties and behaviours.
// class and object
// link-https://www.geeksforgeeks.org/c-classes-and-objects/?ref=lbp

// polymorphism runtime virtual function
// https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-cpp/

// inheritence 
// link-https://www.javatpoint.com/cpp-inheritance

// static keyword means in c++
// link-https://www.geeksforgeeks.org/static-keyword-cpp/

// constructor and deconstructor in c++
// link -https://www.geeksforgeeks.org/difference-between-constructor-and-destructor-in-c/

// structure in c++
// link-https://www.geeksforgeeks.org/structures-in-cpp/

// constructor in c++
// link-https://www.geeksforgeeks.org/constructors-c/