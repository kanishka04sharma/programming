#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the three values");
	scanf("%d\n %d\n %d",&a,&b,&c);
	if(a>b&&a>c){
		printf("a is grater");
	}
	else{
		printf("a is not grater ");
	}
	return 0;
}
