//print tribonacci series

#include<stdio.h>
int main(void)
{
	int n,a=0,b=1,c=2,d,i;
	printf("Enter term...");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d ",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	
	return 0;
}