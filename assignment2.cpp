#include<iostream>
using namespace std;
int main(){
int value=12;
	int *num1;
	int **num2;
	num1=&value;
	num2=&num1;
	cout<<"value of :"<<value<<endl;
	cout<<"number of pointer is :"<<*num1<<endl;
	cout<<**num2;
	return 0;

}