#include<iostream>
using namespace std;
int main(){
	int num,a;
	cin>>num;
	int *x;
	x=&num;
	a=*x;
	
	cout<<a<<endl;
}