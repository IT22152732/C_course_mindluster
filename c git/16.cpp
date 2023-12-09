//calculate total and average marks of 5 subjects

#include<stdio.h>
int main(void)
{
	int phy,che,math,eng,hindi,total;
	double avg;
	printf("Enter marks of 5 subjects:");
	scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&hindi);
	
	total = phy+che+math+eng+hindi;
	printf("Total marks: %d\n",total);
	
	avg = total/5;
	printf("Average mark: %1f",avg);
	
	return 0;
}