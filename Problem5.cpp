#include<bits/stdc++.h>
using namespace std;

int main(){
    int till_10 = (10*9*8*7)/2;
    /*start from 10 :
        10 => div by 2 and 5.
        9 => div by 3.
        8 => div by 2 and 4. (redundancy : 2 so divide final result by 2)
        7 => div by 7.
        9 & 8 => div by 2 and 3 so div by 6.
    */
   // we start from 10 and not 1 bcz (div by 2) !=>(div by 4) and so on.

   // above intuition doesn't work here. (-_-) 

    // lame solution :
    //inserted numbers(starting from 2) one by one  until a multiplication among some of them could generate all the numbers from 1 to 20.     
    int till_20 = 2*2*2*2*3*3*5*7*11*13*17*19;

    cout<< till_10 << endl;
    cout << till_20 << endl;
    
    // methodological solution :
}