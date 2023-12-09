//find maximum number between two numbers
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		printf("%d is maximum number",a);
		
		
	}
	else{
		printf("%d is maximum number",b);
	}
	
	return 0;
}