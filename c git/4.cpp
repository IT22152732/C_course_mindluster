//print first natural numbers using loop

#include<stdio.h>
int main(void){
	int n;
	printf("Enter Any Number:");
	scanf("%d", &n);
	
	
	for(int i=1; i<=n; i++){
		printf("%d ", i);
	}
	
	return 0;
}