//print first N natural numbers using recursion
#include<stdio.h>
void natural(int n){
	if(n<=10){
		printf("%d ",n);
		natural(n+1);
	}
}
int main(void){
	int n=1;
	natural(n);
	
	return 0;
}