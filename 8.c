#include<stdio.h>
int main(){
	int div;
	printf("enter the value");
	scanf("%d",&div);
	if(div%5==0 && div%11==0)
	{
		printf("divisible ");
	}else
	{
		printf("not divisible");
	}
	return 0;
}
