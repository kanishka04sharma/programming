// 67+3*2+(34-2*5)
#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	printf("please enter the first,second,third,fourth,fifth,sisth");
	scanf("%d\n %d\n %d\n %d\n %d\n %d",&a,&b,&c,&d,&e,&f);
	int total=a+b*c+(d-e*f);
	printf("%d",total);
	return 0;
}
