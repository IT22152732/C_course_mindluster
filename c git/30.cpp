//count digits in a number
#include<stdio.h>
#include<conio.h>
int main(){
	int n,count=0;
	
	printf("Enter no:");
	scanf("%d",&n);
	
	while(n>0){
		n=n/10;
		count++;
	}
	printf("total %d digits",count);
	getch();
	
	return 0;
}