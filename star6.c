#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
		printf("*");
}	
	printf("\n");
	}
		for(i=4;i>=5;i++){
		for(j=5;j<=i;j--){
		printf("*");
	}
}
	return 0;
}