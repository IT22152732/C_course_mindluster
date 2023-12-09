//check number is perfect or not
#include<stdio.h>
int main(void){
	int n,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
				sum=sum+i;
		}
	
		
	}
	if(sum==n)
	printf("Perfect Number");
	else
	printf("Not perfect number");
	
	return 0;
}