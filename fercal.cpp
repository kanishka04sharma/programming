#include<iostream>
using namespace std;
int temp(float *x,float *y);
int main(){
	float c,f;
	cin>>c>>f;
	float *x,*y;
	x=&c;
	y=&f;
	temp(x,y);
}
int temp(float *x,float *y){
	float fer,cal;
	fer=((*x)*1.8)+32;
	cout<<"fer :"<<fer<<endl;
	cal=((*y)-32)*0.5555;
	cout<<"cel :"<<cal;
}