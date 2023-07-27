#include<stdio.h>;
int main(){
	int a,b;
	printf("enter the number of a ");
	scanf("%d",&a);
	printf("enter the number of b ");
	scanf("%d",&b);
	int c=a+b;
	int d=a-b;
	int e=a*b;
	int f=a/b;
	int g=a%b;
	printf("addition=%d\n substration=%d\n multi=%d\n division=%d\n module=%d",c,d,e,f,g);
	return 0;
}
