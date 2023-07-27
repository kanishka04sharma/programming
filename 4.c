#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("a is grater");
	}
	else if(b>c){
		printf("b is grater");
	}
	else
	{
		printf("c is grater");
	}
	return 0;
}
