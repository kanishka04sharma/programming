#include<stdio.h>
int main(){
	int a,b,c,d,e,total;
	printf("enter the number");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>40 && b>40 && c>40 && d>40 && e>40)
			 total=a+b+c+d+e;
			 printf("%d\n",total);

	{
		if(a>40 && a<50 && b>40 && b<50 && c>40 && c<50 &&d>40 && d<50 && e>40 && e<50 )
			{
			  printf("d + ");
			int avg=total/5;
			printf("%d",avg);
			}
	else if(a>50 && a<60 && b>50 && b<60 && c>50 && c<60 &&d>50 && d<60 && e>50 && e<60 )
			{
			 printf("c + ");
			int avg=total/5;
			printf("%d",avg);
	
			}
			else if(a>60 && a<70 && b>60 && b<70 && c>60 && c<70 &&d>60 && d<70 && e>60 && e<70 )
			{
			 printf("b + ");
			int avg=total/5;
			printf("%d",avg);
	}
}
	return 0;
}


