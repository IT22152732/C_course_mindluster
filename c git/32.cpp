//check a number is palindrome or not
#include<stdio.h>
int main(void){
	
	int n,c,s=0,r;
	printf("Enter no:");
	scanf("%d",&n);
	c=n;
	
	while(n>0){
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s){
		printf("Palndrom");
	}else
	printf("not");
	return 0;
}