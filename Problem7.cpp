//Program to find n-th prime number :
// Prime numbers : 2,3,5,7,11,13,...

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll arr[100001];
    arr[0] = 2;
    int k=1;

    if(k<=10001){
    for(ll i=3;i<200000;i=i+2){
        int flag = 1;
        //cout<<i<<endl;
        for(ll j=2;j<=sqrt(i);j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            arr[k] = i;
            k++;
            }
        }
    }
    //cout<<k<<endl;
    cout<<arr[10000]<<endl; // for 10001st prime number.
}