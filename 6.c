#include<stdio.h>
int main(){
	int user;
	printf("enter the number");
	scanf("%d",&user);
	if(user<0)
	{
		printf("this is a nagative");
	}
	else if(user>0)
	{
		printf("this is positive ");
	}
	else
	{
		printf("this is zero");
	}
	return 0;
}
