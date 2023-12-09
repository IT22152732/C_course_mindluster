//insert the element at the beginning of array
#include<stdio.h>
int main(void){
	
	int a[100],n,i,item;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	printf("Enter elements in array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("begining");
	scanf("%d",&item);
	n++;
	
	for(i=n;i>1;i--)
	
	{
		a[i-1]=a[i-2];
	}
	a[0]=item;
	printf("resultant:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}