//Problem 3.
#include<stdio.h>
#include<math.h>

long long largestPrime(long long n){
	int i;
	long long largest = -1;
	
	while(n%2 == 0){
		largest = 2;
		n=n/2;
	}
	//Now n is an Odd number.
	for(i=3;i<=sqrt(n);i+=2){
		while(n%i == 0){
			largest = i;
			n/=i;
		}
	} 
	//If the remaining number n is a prime number greater than 2 :
	if(n>2)
		largest = n;
		
	return largest;
}

int main(){
	int maxPrime;
	maxPrime=largestPrime(600851475143);
	printf("%lld",maxPrime);
}
