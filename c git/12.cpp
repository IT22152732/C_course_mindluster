//check a character is vowel or consonant

#include<stdio.h>
int main(void)
{
	char c;
	printf("Enter character:");
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		printf("character is vowel");
	}
	else{
		printf("character is consonent");
	}
}