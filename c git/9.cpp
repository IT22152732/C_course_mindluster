//check a number is odd or even

#include<stdio.h>
int main(void)
{
	int no;
	
	printf("Enter number: ");
	scanf("%d", &no);
	
	if(no%2 == 0){
		printf("%d is even number", no);
	}
	else{
		printf("%d is odd number", no);
	}
	return 0;
}