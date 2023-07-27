#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=2;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
		
		printf("*");
	}
	printf("\n");
	}
		for(i=3;i>=1;i--){
		for(j=2;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
		
		printf("*");
	}
	printf("\n");}
	return 0;
}
