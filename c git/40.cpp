//print day of week using switch case
#include<stdio.h>
int main(void){
	int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1: printf("monday");
		break;
		
			case 2: printf("tues");
		break;
		
			case 3: printf("wed");
		break;
		
			case 4: printf("thur");
		break;
		
			case 5: printf("fri");
		break;
		
			case 6: printf("satu");
		break;
		
			case 0: printf("sun");
		break;
		
		default:printf("Invalid");
	}
	
	return 0;
}