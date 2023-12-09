//copy one string into another
#include<stdio.h>
int main(void){
	char str1[50];
	char str2[50];
	
	printf("enter any string in str1:");
	
	strcpy(str2,str1);
	
	printf("enter copy str2: %s",str2);
	
	
	return 0;
}