//calculate sum of first natural numbers

#include<stdio.h>
int main(void){
	int n, sum = 0;
	
	printf("Enter Any Number:");
	scanf("%d", &n);
	
	
	for(int i=1; i<=n; i++){
	 sum = sum + i;
	}
		printf("%d ", sum);
	
	return 0;
}