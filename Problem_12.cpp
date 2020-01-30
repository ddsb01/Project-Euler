#include<bits/stdc++.h>
#define ll long long
using namespace std;

// function to count the divisors 
int countDivisors(ll n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

int main(){
    // n-th triangle number is : n(n+1)/2
    ll num;
    //cin>>n;

    for(int i=1;i<=1000000;i++){
        ll x = i*(i+1);
        num = x/2;

        int div = countDivisors(num);

        if(div >= 500){
            cout<<"Term number "<<i<<" ( "<< num <<" )"<<" has "<<div<<" divisors."<<endl;
            break;
        }
    }
}