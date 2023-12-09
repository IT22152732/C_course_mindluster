//sort array elements in ascending descending order
#include<stdio.h>
int main(void){
	int a[100],size,i,j,temp;
	
	printf("Enter array size:");
	scanf("%d",&size);
	
	printf("Enter elements\n");
	for(int i=0;i<5;i++);
	{
		scanf("%d",&a[i]);
		
	}
	
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
			}
		}
	}
	
	printf("array element:");
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	
	
	return 0;
}