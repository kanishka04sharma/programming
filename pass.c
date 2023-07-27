#include<stdio.h>
int main(){
	int e,h,m,s,c;
	printf("please enter your marks");
	scanf("%d\n %d\n %d\n %d\n %d",&e,&h,&m,&s,&c);
	if(e>=40&&h>=40&&m>=40&&s>=40&&c>=40)
	{
		printf("you are pass");
	}else
	{
		printf("you are fail");
	}
	return 0;
}
