#include<stdio.h>
int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num==5 || num==7 || num==11 || num==13){
		printf("you are valid");
	}
	else{
		printf("you are not valid ");
	}
	return 0;
}
