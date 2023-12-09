//check number is prime or not
#include<stdio.h>
int main(void)
{
	int n,count=0;
	printf("Enter number:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
		
	}
	if(count==2){
		printf("Prime Number");
	}
	else
	printf("Not Prime Number");
	
	return 0;
}

