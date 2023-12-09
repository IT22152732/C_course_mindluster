//swap two numbers usin pointers
#include<stdio.h>
int main(void){
	
	int a=10,b=20,*p,*q,temp;
	p=&a;
	q=&b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("before swapping:%d %d\n",a,b);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("after swapping:%d %d",*p,*q);
	
	return 0;
}