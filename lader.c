#include<stdio.h>
int main(){
	int a,b,c;
	printf("entr the first and second and third value");
	scanf("%d\n %d\n,%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("a is grater");
	}
	else if(b>a && b>c){
	
		printf("b is grater");
	}
	else if(c>a && c>b){
	
		printf("c is grater");
	}
	else{
		printf("all values are equal");
	}
	return 0;
}
