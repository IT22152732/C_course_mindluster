//calculate sum of array elements
#include<stdio.h>
int main(void){
	
	int a[5],sum=0;
	
	printf("Enter element");
	
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
		printf("sum of element");
	
	for(int i=0;i<5;i++){
		sum=sum+a[i];
		
	}
	printf("sum=%d",sum);
	return 0;
}