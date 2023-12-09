//add two numbers using pointers
#include<stdio.h>
int main(void){
	
	int *p,*q,a,b,r;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	
	
	p=&a;
	q=&b;
	
	r=*p+*q;
	printf("Sum:%d",r);
	return 0;
}