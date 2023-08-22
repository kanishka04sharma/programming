#include<iostream>
using namespace std;
int grade(int *h,int *e,int *m);
int main(){
	int hindi,english,maths;
	cin>>hindi>>english>>maths;
	int *h,*e,*m;
	h=&hindi;
	e=&english;
	m=&maths;
	grade(h,e,m);
}
int grade(int *h,int *e,int *m){
	int avg;
	avg=*h+*e+*m/3;
	if(avg>=80)
	{
	cout<<"A grade"<<endl;
	}
	else if(avg>=60)
	{
	cout<<"B grade"<<endl;
	}
	else
		\
	
	cout<<"C grade"<<endl;
	}
}