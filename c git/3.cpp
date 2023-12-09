//sum between two numbers

#include<stdio.h>
int main(void){
	
	int no1, no2, s=0;
	printf("Enter range:");
	scanf("%d%d", &no1, &no2);
	
	
	while(no1<=no2){
		s = s + no1;
		no1 = no1 + 1;
		
		
	}
	
	printf("Sum %d",s);
	
	
	
	return 0;
}