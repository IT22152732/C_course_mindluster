//reverse a number
#include<stdio.h>
int main(void){
	
	int n,r;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(n>0){
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	return 0;
}