/*salalry :
holidays (1) =full salary 
2-5 =5% 
5-14 =10% 
15 =50% 
else =not salary 

output : 
 
salary : 
alot : holidays*/
#include<stdio.h>
int main(){
	float salary,holiday;
	printf("enter your salary");
	scanf("%f",&salary);
	printf("enter your holidays");
	scanf("%f",&holiday);
	if(holiday==1)
	{
		printf("full salary");
	}
	else if(holiday>2 && holiday<=5)
	{
		printf("5 persent cit of your salary");
	}
	else if(holiday>5 && holiday<=14)
	{
		printf("10 present cut of your salary");
	}
	else if(holiday>15){
		printf("50 persent cut of your salary");
	}else
	{
		printf("not salary");
	}

	return 0;
}
