// control statements
#include<stdio.h>
int main(){
	/*int a=10,b=20;
	printf("the real value of a is :%d\n",a);
	printf("the real value of b is :%d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swap value of a is :%d\n ",a);
	printf("the swap value of b is :%d\n ",b);
	
	return 0;
	
}


int a,b;
printf("please enter the first value");
scanf("%d",&a);
printf("please enter the second value");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("swap the number of a %d\n",a);
printf("swap the number of b %d\n",b);
return 0;
}
*/
int a,b,swap;
printf("enter the real value of a and b");
scanf("%d\n %d",&a,&b);
swap=a;
a=b;
b=swap;
printf("swap the value of a is %d\n swap the value of b is %d",a,b);
return 0;
}



