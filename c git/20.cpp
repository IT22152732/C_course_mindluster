//pattern part3

/*#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
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
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}*/


#include<stdio.h>
int main(void)
{
	int i,j,count=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",count);
			++count;
		}
		printf("\n");
	}
	return 0;
}