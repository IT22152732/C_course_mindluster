//sum of two numbers|factorial of any numbers
#include<stdio.h>
int main(void){
	
	int n,a,b,f=1,i,ch;
	printf("Enter your choice:");
	scanf("%d",ch);
	
	switch(ch){
		case 1: printf("Enter any number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			printf("%d ",i);
		}
		break;
		
		case 2: printf("Enter two no:");
		scanf("5d%d",&a,&b);
		n=a+b;
		printf("Sum=%d",n);
		break;
		
		
		case 3: printf("Enter any number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			f=f*i;
		}
		printf("Factorial=%d",f);
		break;
		
		default: printf("Invalid");
		break;
	}
	return 0;
}