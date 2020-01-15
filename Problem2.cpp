//Problem 2.
#include <stdio.h>
#define ll long long 
using namespace std;

int f(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return (f(n-1) + f(n-2));
}
int main()
{
	int x = f(35);	//hit and trial
	printf("%d\n",x);
	// f(35) > 4M
	int j=0;
	for(int i=1;i<=35;i++)
	{
		j++; //since 'i' was not getting printed there *
		if(f(i)>4000000)
			break;
	}
	printf("%d\n",j);	//j=33 implies f(33) is just greater than 4M
	
	//Therefore :
	
	ll sum=0;
	for(int i=1;i<=j-1;i++)
	{
		if(f(i)%2 == 0)
			sum+=f(i);
	}
	printf("%lld",sum);
}


