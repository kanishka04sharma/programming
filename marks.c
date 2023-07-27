#include<stdio.h>
int main(){
	int english,maths,science,computer,sst;
	printf("enter your marks");
	scanf("%d\n %d\n %d\n %d\n %d",&english,&maths,&science,&computer,&sst);
		if(english>=40 && maths>=40 && science>=40 && computer>=40 && sst>=40){
		int total=english+maths+science+computer+sst;
		printf("%d",total);
		int avg=total/5;
		printf("pass");
	}else{
		printf("fail");
	}
	return 0;
}
