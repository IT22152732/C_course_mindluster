//check a number is armstrong or not
#include<stdio.h>
int main(void){
	
	int n,arm=0,r,c;
	printf("Enter no:");
	scanf("%d",&n);
	c=n;
	while(n>0){
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
		
	}
	if(c==arm){
		printf("Armstrong");
	}else
	printf("Not");
	return 0;
}