//store and display student record using structure
#include<stdio.h>
struct stu{
	int sroll;
	char sname[20];
	int marks[5];
	
};
int main(void){
	struct stu s;
	int total=0,i;
	float avg;
	
	printf("Enter sroll:");
	scanf("%s",&s.sroll);
	
	printf("Enter sname:");
	scanf("%s",&s.sname);
	
	printf("Enter 5 sub smarks:");
	for(int i=0;i<5;i++){
		scanf("%d",&s.marks[i]);
		total=total+s.marks[i];
		avg=(float)total/5;
	}
	
	
	printf("Sroll:%d\n",s.sroll);
		printf("Sname:%d\n",s.sname);
			printf("S total marks:%d\n",total);
				printf("S avg:%d\n",avg);
	return 0;
}