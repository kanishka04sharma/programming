//45+(23*2-9)/34
#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("please enter the first,second,third,fourth,fifth");
	scanf("%d\n %d\n %d\n %d\n %d",&a,&b,&c,&d,&e);
	int total=a+(b*c-d)/e;
	printf("%d",total);
	return 0;
}
