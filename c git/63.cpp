//make a simple function program
#include<stdio.h>
void add(){
	int a=10;
	int b=20;
	int c;
	c=a+b;
	printf("Addition %d\n",c);
}
void sub(){
	int a=20,b=10,c;
	c=a-b;
	printf("Substraction %d\n",c);
	
}
int main(void){
	
	add();
	add();
	add();
	add();
	sub();
	return 0;
}