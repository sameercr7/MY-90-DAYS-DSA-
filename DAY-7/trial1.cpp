// N-bonacci Numbers

// Initialize first N-1 terms as 0 and N-th term as 1. Now to find terms from (N+1)-th to M-th, we simply compute sum of previous N terms. 

// Example : N = 4, M = 9

// First three terms are 0, 0, 0 

// Fourth term is 1. 

// Remaining terms are computed by adding 

// previous 4 terms. 
0 0 0 1 
0 0 0 1 1 
0 0 0 1 1 2 
0 0 0 1 1 2 4 
0 0 0 1 1 2 4 8
0 0 0 1 1 2 4 8 15
0 0 0 1 1 2 4 8 15 29

using namespace std;
  
// Function to print bonacci series
void bonacciseries(long n, int m)
{
    // Assuming m >= n.
    int a[m] = { 0 };
    a[n - 1] = 1;
  
    // Computing every term as sum of previous
    // n terms.
    for (int i = n; i < m; i++)
        for (int j = i - n; j < i; j++)
            a[i] += a[j];
  
    for (int i = 0; i < m; i++)
        cout << a[i] << "  ";
}
  
// Driver's Code
int main()
{
    int N = 5, M = 15;
    bonacciseries(N, M);
    return 0;
}