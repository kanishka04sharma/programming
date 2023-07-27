#include<stdio.h>
int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%7==0 || num%3==0){
		printf("num is divisible");
	}
	else{
		printf("num is not divisible ");
	}
	return 0;
}
