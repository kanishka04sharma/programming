#include<stdio.h>
int main(){
	char ch;
	printf("enter the word");
	scanf("%c",&ch);
	if(ch=='f' || ch=='F')
	{
		printf("female");
	}
	else if(ch=='m' || ch=='M')
	{
		printf("male");
	}
	else
	{
		printf("other");
	}
	return 0;
}
