#include<stdio.h>
int main(){
	char character;
	printf("enter the character");
	scanf("%c",&character);
	if(character=='a'||character=='e' || character=='i'|| character=='o' ||character=='u'){
	printf("this is vowel");
	}	else{
		printf("this  is constant");
	}
	return 0;
}
