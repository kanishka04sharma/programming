#include<stdio.h>
int main()
{
	int temp,rem,sum=0,num;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
		printf("%d",sum);
	while(num!=0);
	{
		rem=num%10;
		sum=(sum*10) + rem;
		num=num/10;
	}

	if(temp==sum)
	{
		printf("number is  palindrom");
	}else
	{                          
		printf("number is not palindrom");
	}
	return 0;
}
