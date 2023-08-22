#include<iostream>
using namespace std;
int main(){
	const int a=10;
	int *p;
	p=&a;
	cout<<"entr the velue berfore "<<a<<endl;
	*p=20;
	cout<<"after Change the value is "<<a<<endl;
	return 0;
}