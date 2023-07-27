#include<stdio.h>
int main(){
	double heightInCm;
	printf("enter the height of person in m");
	scanf("%lf",&heightInCm);
	double heightInMeters = heightInCm / 100;
	if(heightInMeters<1.5){
		printf("low\n");
	}
	else if(heightInMeters>1.5 && heightInMeters<1.7){
		printf("mid\n");
	}
	else{
		printf("high\n");
		}
return 0;
	
}
