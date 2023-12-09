//check a person is eligible for vote or not

#include<stdio.h>
int main(void){
	int age;
	printf("enter age:");
	scanf("%d", &age);
	
	if(age >= 18){
		printf("Voting Eligible");
	}
	else{
		printf("Not Voting Eligible");
	}
	
	
	return 0;
}