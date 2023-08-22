#include<iostream>
using namespace std;
int squre(int *x);
int main(){
	int n;
	cin>>n;
	int *x;
	x=&n;
	squre(x);
}
int squre(int *x){
	int y;
	y=(*x)*(*x);
	cout<<y;
}