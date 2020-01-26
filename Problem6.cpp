#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    //1. sum of squares of n numbers = n(n+1)(2n+1)/6
    //2. square of sum of n numbers = [n(n+1)/2]^2
    
    // difference between 1 and 2 for n=100 :

    ll n = 100;
    ll x = n*(n+1)*n*(n+1);
    ll y = n*(n+1)*(2*n+1);

    ll ans = (x/4)-(y/6);
    cout<<x<<endl<<y<<endl<<ans<<endl;
}