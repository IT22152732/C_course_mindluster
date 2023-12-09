//array element in reverse order
#include<stdio.h>
int main(void){
int a[5];
	printf("Enter array element:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\narray element:");
	
		for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
		printf("\nrevers narray element:");
	
		for(int i=4;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}