//calculate simple interest
#include<stdio.h>
int main(void){
	
	float amt,rate,time,si;
	printf("enter the amount:");
	scanf("%f",&amt);
	
	printf("Enter the rate:");
	scanf("%f",&rate);
	
	printf("Enter the time:");
	scanf("%f",&time);
	
	si=(amt*rate*time)/100;
	printf("simple interest=%f",si);
	

	return 0;
}