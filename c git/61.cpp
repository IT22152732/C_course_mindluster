//store five students record using structure
#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
	
}s[100];
int main(void){
	int n;
printf("enter no of students:");
scanf("%d",&n);
	printf("enter students record\n\n");
	for(int i=0;i<n;i++){
		printf("Enter sroll:");
		scanf("%d\n",&s[i].roll);
		
		printf("enter sname:");
		scanf("%s\n",&s[i].name);
		
		printf("Enter smarks:");
		scanf("%f\n",&s[i].marks);
	}
	printf("\nstudents record\n\n");
	
	for(int i=0;i<n;i++){
		
		
		    printf("sroll:%d\n",s[i].roll);
		
			printf("sname:%s\n",s[i].name);
	
			printf("smarks:%d\n",s[i].marks);
			
			
	}
	
	return 0;
}