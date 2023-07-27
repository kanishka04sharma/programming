//switch(in c)  A----Z =upper case 
//a----z =lower case 
//0---9 =digit
#include<stdio.h>
int main(){
	char ch;
	printf("please enter the character and digit");
	scanf("%c",&ch);
	if(ch>='A' && ch<'Z') 
	{
		printf("this is upercase %c",ch);
	}
	else if(ch>'a' && ch<'z')
	{
		printf("this is lowercase %c",ch);
	}
	else if(ch>='0' && ch<'9'){
		printf("this is digits %c",ch);
	}else
	{
		printf("invalid values");
	}
	
	return 0;
}
