//printing pattern part2

/*#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}*/


#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			if(i==1 || i==3 || j==1 || j==3 ){
				printf("* ");
			}else{
				printf(" ");
			}
		printf("\n");	
		}
		
	}
	
	return 0;
}