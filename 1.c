#include<stdio.h>
int main(){
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=18){
		printf(" vote for  valid ");
	}
	else{
		printf("vote is invalid");
	}
	return 0;
}
