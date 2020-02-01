#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    // n → n/2 (n is even)
    // n → 3n + 1 (n is odd)

    ll ans[1000000];

    ll k = 0;

    for(ll i=1; i<=1000000; i++){
        ll n = i;
        ll count = 1;

        while(n != 1){
            if(n%2 == 0)
                n = n/2;
            else
                n = (3*n)+1;

            count++;
        }

        ans[k]=count;
        k++;
    }

    //cout<<k<<endl;
    int max = 0;
    ll answer;
    for(ll i=0;i<k;i++){
        if(ans[i]>max){
            max = ans[i];
            answer = i;
        }
    }
    cout<<(answer+1)<<endl; //since first loop starts from 1 and ans[] starts from index 0.
}
