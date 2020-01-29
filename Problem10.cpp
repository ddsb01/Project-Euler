#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll prime[200000];
    prime[0] = 2;

    ll k = 1;
    int flag;

    //for generating prime numbers upto 2M.(less than 2M obviously)
    for(ll i=3; i<2000000; i=i+2){
        flag = 1;
        for(ll j=2; j<=sqrt(i); j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            prime[k] = i;
            k++;
        }
    }
    cout<< "k = "<< k << endl;
    cout<<"prime number just shy of 2M"<<prime[148932]<<endl;

    ll sum = 0;
    for(ll i=0;i<k;i++){
        sum+=prime[i];
    }
    cout<<sum<<endl;
}