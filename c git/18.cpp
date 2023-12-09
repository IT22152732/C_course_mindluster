//print star pattern part1

/*#include<stdio.h>
int main(void)
{
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	
		
	}
	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=i;j<5;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
 }*/
 
 
 #include<stdio.h>
int main(void)
{
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(k=i;k<=5;k++){
			printf("*");
		}
		printf("\n");
	}
     
	return 0;
}