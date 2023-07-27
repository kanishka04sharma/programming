#include<stdio.h>
int main(){
	int n,i=1;
	printf("enter the table");
	scanf("%d",&n);
	while(i<=10)
	{
	printf("%d * %d= %d\n",n,i,i*n);
	i++;
	}

	return 0;
}
