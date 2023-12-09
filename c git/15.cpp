//calculate tax on a salary

#include<stdio.h>
int main(void)
{
	int sal;
	double tax;
	printf("Enetr Salary of Person:");
	scanf("%d",&sal);
	
	if(sal<=10000){
		printf("no tax");
		
	}else if(sal>10000 && sal<=100000){
		tax=sal*0.10;
		printf("%1f",tax);
		
	}
	else if(sal>100000 && sal<=1000000){
		tax=sal*0.25;
		printf("%1f",tax);
		
	}else{
		
		tax=sal*0.40;
		printf("%1f",tax);
		
	}
	
	return 0;
}