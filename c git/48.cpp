//copy one array elemenys to another
#include<stdio.h>
int main(void){
	
	int a1[100],a2[100],i,n;
	printf("Enter size:");
	scanf("%d",&n);
	printf("enter array element:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	printf("First array elements:\n");
	for(i=0;i<n;i++){
		printf("%d",a1[i]);
	}
	
	printf("coping array element:\n");
	for(i=0;i<n;i++){
		printf("%d ",a2[i]);
	}
	
	
	return 0;
}