#include<stdio.h>
int main(){
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u')
	{
		printf("vowels");
	}else
	{
		printf("constant");
	}
	return 0;
}
