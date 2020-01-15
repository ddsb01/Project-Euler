//Problem 1.
#include<stdio.h>

void sumArray(int arr[],int n){
	int i,sum=0;
	
	for(i=0;i<n;i++)
		sum+=arr[i];
		
	printf("%d",sum);
}
int main(){
	int i,k=0,n;
	int arr[1000];
	for(i=1;i<1000;i++){
		if(i % 3 == 0 || i % 5 == 0)
		{
			arr[k]=i;
			k++;
		}	
	}
	sumArray(arr,k);
}
