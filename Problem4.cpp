// A naive solution. 
#include<bits/stdc++.h>
using namespace std;

int odd_palindrome(int n){
    // for the given problem the number of digits in n can be either 5 or 6. 
    // so, for this function the number of digits is 5.
    // if n = abcde
    int a = n / 10000; 
    int b = (n / 1000)-(a*10);
    int c = (n / 100) - (n / 1000)*10;
    int d = (n / 10) - (n / 100)*10; 
    int e = (n % 10);

    cout<<a<<b<<c<<d<<e<<endl;
    if(a == e && b == d)
        return 1;
    else 
        return 0;
}

int even_palindrome(int n){
    // here number of digits = 6.
    // if n = abcdef
    int a = n / 100000; 
    int b = (n / 10000)-(a*10);
    int c = (n / 1000) - (n / 10000)*10;
    int d = (n / 100) - (n / 1000)*10; 
    int e = (n / 10) - (n / 100)*10;
    int f = n % 10;

    if (a == f && b == e && c == d)
        return 1;
    else
        return 0;   
}

int num_of_digits(int n){
    int count = 0;
    while(n != 0){
        n /= 10;
        count ++;
    }
    return count;
}


int main(){
    int num;
    int ocheck = 0;
    int echeck = 0;
    int flag = 0;

    for(int i = 999; i > 900; i--){     // for all 3 digit numbers : i > 99 but then keep track of the maximum such number.
        for(int j = 999; j > 900; j--){
            num = i * j;
            
            //cout << num << endl;
            int c = num_of_digits(num);
            
            if(c == 5)
                ocheck = odd_palindrome(num);

            if(c == 6)
                echeck = even_palindrome(num);

            //cout<< "o = "<< ocheck<<endl;
            //cout<< "e = "<< echeck<<endl;

            //cout<<endl;
            
            if(ocheck == 1 || echeck == 1){
                cout << "ans = " << num << endl;
                cout<< "o = "<< ocheck<<endl;
                cout<< "e = "<< echeck<<endl;

                flag = 1;
            }
            if(flag == 1)
                break;
        }
        if(flag == 1)
            break;
    }
}
