//find maximun and minumum element of array
/*#include<stdio.h>
int main(void){
	int a[100],size,max;
	printf("Enter array size:");
	scanf("%d",&size);
	printf("Enter elements:");
		for(int i=0;i<size;i++){
		
		scanf("%d",&a[i]);
	}
	max=a[0];
		for(int i=0;i<size;i++){
		
		if(a[i]>max){
			max=a[i];
		}
	}
	
printf("Max=%d",max);
	

	
	return 0;
}*/

#include<stdio.h>
int main(void){
	int a[100],size,min;
	printf("Enter array size:");
	scanf("%d",&size);
	printf("Enter elements:");
		for(int i=0;i<size;i++){
		
		scanf("%d",&a[i]);
	}
	min=a[0];
		for(int i=0;i<size;i++){
		
		if(a[i]<min){
			min=a[i];
		}
	}
	
printf("Min=%d",min);
	

	
	return 0;
}