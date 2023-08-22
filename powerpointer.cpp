#include<iostream>
#include<math.h>
using namespace std;
int pow(int *b,int *e){
	int y;
	y=pow(*b,*e);
	cout<<y;
}
int main(){
	int base,exponent;
	cin>>base>>exponent;
	int *b;
	int *e;
	b=&base;
	e=&exponent;
	pow(b,e);
}
