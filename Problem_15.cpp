// can be solved using dp as well...
// ...but using combinatorics gives best time complexity : O(1). (^^)

/* consider a 2*2 grid : 
to reach from top-left to bottom-right corner, we need 2 Right moves and 2 Down moves. 
we have to place 2 R's and 2 D's in 4 places which can be done in C(4, 2) ways.

Generally, for a m*n grid the number of required moves = C(m+n, n) = (m+n)!/(n)! * (m)!
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;


void nCr(int n, int r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    cout << p << endl; 
} 

int main(){
    ll m = 20;
    ll n = 20;

    // m+n = 40
    
    // To calculate 
    // C(n, r) = (n!/r!)/(n-r)!;
    // C(38, 19) = 38!/(19! * 19!)

    nCr(40, 20);

}