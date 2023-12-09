//calculate profit and loss
#include<stdio.h>
int main(void){
	
	int cp,sp,p,l;
	
	printf("enter cost price:");
	scanf("%d",&cp);
	
	printf("enter selling price:");
	scanf("%d",&sp);
	
	p=sp-cp;
	l=cp-sp;
	if(sp==cp){
		printf("  no any prof it and loss:");
	}else if(sp>cp){
		printf("prof it=%d",p);
	}
	else{
		printf("loss=%d",l);
	}
	return 0;
}