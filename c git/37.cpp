//caculate compond interest
#include<stdio.h>
#include<math.h>
int main(void){
	
	float p,r,t,c1;
	printf("enter the principal rate time:");
	scanf("%f%f%f",&p,&r,&t);
	
	c1=p*(pow((1*r/100),t));
	printf("C1 %f",c1);
	

	return 0;
}