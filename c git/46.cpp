//insert element at ending position of array
#include<stdio.h>
int main(void){
	
	int a[100],size,i,item;
	
	printf("Enter size:");
	scanf("%d",&size);
	
	printf("Enter element in array:");
	
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Insert element in array:");
	scanf("%d",&item);
	
	size=size+1;
	a[size-1]=item;
	printf("ending of array:");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return 0;
}