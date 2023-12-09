//swap to matrix using 2D
#include<stdio.h>
int main(void){
		int a[2][2],i,j,b[2][2],temp[2][2];
	
	printf("Enter value of first matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter value of first matrix:\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",b[i][j]);
		}
		
	
	
}


printf("first matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
		
	}
	
	
	printf("second matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
			printf("\n");
		
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			temp[i][j]=a[i][j];
			a[i][j]=b[i][j];
			b[i][j]=temp[i][j];
		}
	}
printf("Swapping\n");
printf("First matrix\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d",&a[i][j]);
	}
	printf("\n");
}
	printf("second matrix\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d",&b[i][j]);
	}
	printf("\n");
}
		
	return 0;
}