#include<stdio.h>
int main(){
	int age,weight;
	printf("enter the age and waight");
	scanf("%d %d",&age,&weight);
	if(age>=18)
		{
			if(weight>50)
			{
			printf("valid");
			}
		else
			{
				printf("please enter the weeigt is gratern then 50");
			}
		}
	else
	{
		printf("please enter the age>18");
	}
	return 0;
}
