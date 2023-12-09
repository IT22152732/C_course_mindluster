#include<stdio.h>
int main(void){

	int a;
	char b;
	float c;
	double d;
	
	printf("int %d byte", sizeof(a));
	printf("\n");
	printf("char %d byte", sizeof(b));
	printf("\n");
	printf("float %d byte", sizeof(c));
	printf("\n");
	printf("double %d byte", sizeof(d));
					
	return 0;
}