//call by reference program in c
#include<stdio.h>
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("p=%d q=%d\n",*p,*q);
}
int main(void){
	
	int a=100,b=200;
	swap(&a,&b);
		printf("a=%d b=%d\n",a,b);
	return 0;
}