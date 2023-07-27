#include<stdio.h>
int main(){
		int i=1;
		while(i<=100){
		if(i%5==0 || i%11==0){
			printf("%d",i);
		}
		i++;
	}
		return 0;
}
