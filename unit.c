/*electric city bill : 
4 unit 
40 
1- 10 = 10% 
11-20 =15% 
21-40 =30% 
50 =50% 

output : 
unit :3 
amout 30 
discout : 10% 
total pay amount :*/
#include<stdio.h>
int main(){
	float unit;
	printf("enter yor unit");
	scanf("%f",&unit);
	if(unit>1 && unit<=10){

		printf("10 persent ");
	}
	else if(unit>=11 && unit<=20){
		printf("15 persent");
	}
	else if(unit>=21 && unit<=40)
	{
		printf("30 persent");
	}
	else if(unit>=50)
	{
		printf("50 persent");
	}
	else
	{
		printf("please enter valid unit");
	}
	return 0;
} 
