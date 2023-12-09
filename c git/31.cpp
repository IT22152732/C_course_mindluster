//find sum of digits of a number
#include<stdio.h>
int main(void){
	int n,r,sum=0;
	printf("Enter no:");
	scanf("%d",&n);
	
	while(n>0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits:%d",sum);
	
	return 0;
}