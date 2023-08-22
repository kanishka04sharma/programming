#include<iostream>
using namespace std;
void cube(int *nptr);
int main(){
	int number=5;
	cout<<"the original value of number is :"<<number<<endl;
	cube(&number);
	cout<<"the value of number is :"<<number<<endl;
	return 0;
}
void cube(int *nptr){
	*nptr= *nptr * *nptr * *nptr;
}