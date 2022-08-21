// josephus problem
// refer to screenshot
// try to run for 5,5 then 4,3

#include <iostream>
using namespace std;


int jos(int n, int k)
{
	if(n == 1)
		return 0;
	else{
        // we will use modulp operator so that it do not go out of bound
	    int x=(jos(n - 1, k) + k) % n;
	    cout<<x<<" "<<endl;
		return (jos(n - 1, k) + k) % n;
	}
}
// this is then applicable when indexing start from 1 instead of zero
int myJos(int n, int k)
{
	return jos(n, k) + 1;
}
	
int main() {
	
	cout<<myJos(5, 3); 
	
	return 0;
}