//calculator using switch case
#include<stdio.h>
int main(void){
	
    float a,b,c;
    char ch;
    
	printf("Enter first no:");
	scanf("%f",&a);
	
	printf("Enter choice:");
	scanf("%c\n",&ch);
	
	printf("Enter second no:");
	scanf("%f\n",&b);
	
	
	switch(ch){
		case'+':
		c=a+b;
		printf("output=%f",c);
		break;
		
			case'-':
		c=a-b;
		printf("output=%f",c);
		break;
		
			case'*':
		c=a*b;
		printf("output=%f",c);
		break;
		
		
			case'/':
		c=a/b;
		printf("output=%f",c);
		break;
		
		
		default:printf("Invalid");
		break;
	}
	
	
	return 0;
}