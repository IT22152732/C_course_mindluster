#include<stdio.h>
int main(void){
	int n, s;
	
	printf("Enter any no:");
	scanf("%d",&n);
	
	s = n * (n + 1)/2;
	
	printf("Sum = %d", s);
	
	return 0;
}