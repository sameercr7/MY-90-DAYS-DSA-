#include<bits/stdc++.h>
using namespace std;
void sameer(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int b=3;
    int a=4;
     cout<<a<<" "<<b<<endl;
    sameer(a,b);
    cout<<a<<" "<<b;
}