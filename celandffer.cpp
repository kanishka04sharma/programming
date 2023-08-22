#include<iostream>
using namespace std;
int temp(float *x);
int temp1(float *y);
int main(){
	float c,f;
	cin>>c>>f;
	float *x,*y;
	x=&c;
	y=&f;
	temp(x);
	temp1(y);
}
int temp(float *x){
	float fer;
	fer=((*x)*1.8)+32;
	cout<<"fer :"<<fer<<endl;
}
int temp1(float *y){
	float cal;
	cal=((*y)-32)/1.8;
	cout<<"cel :"<<cal;

}