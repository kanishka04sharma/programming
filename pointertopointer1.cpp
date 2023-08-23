#include<iostream>
using namespace std;
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
//int div(int a,int b);
int main(){
	int (*operation)(int a,int b);
	operation=add;
	cout<<"add :"<<operation(3,5)<<endl;
	operation=sub;
	cout<<"sub :"<<operation(3,5)<<endl
	;
	operation=mul;
	cout<<"mul :"<<operation(3,5)<<endl;
	// operation=div;
	// cout<<"div :"<<operation(10,5)<<endl;


}
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
//int div(int a,int b){
//	return a/b;
//}
