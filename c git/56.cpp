//show the simple example of poiter
#include<stdio.h>
int main(void){
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("%d\n",a);//10
	printf("%d\n",&a);//address of a
	printf("%d\n",p);//address of a
	printf("%d\n",*p);//10
	printf("%d\n",&p);//address of p
	
	
	
	printf("%d\n",q);//address of p
	printf("%d\n",*q);//address of p
	printf("%d\n",**q);//10
	printf("%d\n",&q);//address of q
	
	
	
	return 0;
}