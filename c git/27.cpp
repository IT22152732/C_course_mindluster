//print all prime number between two numbers
#include<stdio.h>
int main(void){
	int n1,n2,i,j;
	printf("Enter range: ");
	scanf("%d%d",&n1,&n2);
	
	for( int i=n1;i<=n2;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0)
			break;
		}
		if(i==j)
		printf("%d ",j);
	}
	
	return 0;
}