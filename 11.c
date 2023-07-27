#include<stdio.h>
int main(){
	char a;
	printf("enter the vlaue");
	scanf("%c",&a);
	if(a=='c')
	{
	 float c = ('f'- 32) * 5 / 9;
	 printf("Convert the temperature from f to c formula");
	 printf("%f",c);
	}else if(a=='f')
	{
		 float f =('c'- 32) * 5 / 9;
		 printf("Convert the temperature from c to f formula");
		 printf("%f",f);
	}else
	{
		printf("invalid");
	}
	return 0;
}
