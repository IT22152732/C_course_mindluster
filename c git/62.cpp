//show the simple example of union
#include<stdio.h>
union person{
	int age;
	double sal;
};
int main(void){
	
	union person p;
	p.age=12;
	p.sal=50000.45;
	printf("person age:%d\n",p.age);
	printf("person sal:%1f",p.sal);
	return 0;
}