//pyramid pattern

#include<stdio.h>
int main(void)
{
	int i,j,k;
	for(i=1;i<=5;i++){   //rows
		for(j=5;j>i;j--){//left side space
				printf(" ");
				
		}
		for(k=1;k<=i;k++){//*,middle & right-side space
		 printf("* ");
			
		}
		
		printf("\n");
	}
	
	
	return 0;
}