//make calculator without using switch case

#include<stdio.h>
int main(void)
{
	int a,b,c;
	int add,sub,multi,div,rem;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter User Choice:");
	scanf("%d",&c);

	
	if(c==1){
		add=a+b;
		printf("Addition: %d",add);
		
	}
	else if(c==2){
		sub=a-b;
		printf("Subtraction: %d",sub);
	}
	else if(c==3){
		multi=a*b;
		printf("Multiplication: %d",multi);
	}
	else if(c==4){
		div=a/b;
		printf("Division: %d",div);
	}
	else if(c==5){
		rem=a%b;
		printf("Remainder: %d",rem);
	}
	else{
		
		printf("Invalid choice");
	}
	
	return 0;
	
	
	
	
}