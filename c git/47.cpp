//insert element at any position of array
#include<stdio.h>
int main(void){
	
	int a[100],size,i,item,pos;
	
	printf("Enter size:");
	scanf("%d",&size);
	
	printf("Enter element in array:");
	
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("position:");
	scanf("%d",&pos);
	
	printf("item:");
	scanf("%d",&item);
	
	
	for(i=size;i>=pos;i--){
		a[i]=a[i-1];
	}
	
	a[pos]=item;
	size++;
	
	
	

	printf("ending of array:");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return 0;
}