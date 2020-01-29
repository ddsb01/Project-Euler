#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    for(int i=1; i<1001; i++){
        for(int j=1; j<1001; j++){
            for(int k=1; k<1001; k++){
                if((i+j+k) == 1000){
                    if(pow(i, 2)+pow(j, 2) == pow(k, 2))
                    {
                        a = i;
                        b = j; 
                        c = k;
                        break;
                    }
            }
        }
    }
}
cout << a << endl;
cout << b << endl;
cout << c << endl;

long long int ans = a*b*c;
cout<< "ans = " << ans << endl;
}