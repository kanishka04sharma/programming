#include<iostream>
using namespace std;
int add(int *x,int *y);
int main(){
	int n,m;
	cin>>n>>m;
	int *x;
	int *y;
	x=&n;
	y=&m;
	add(x,y);
}
int add(int *x,int *y){
	int sum;
	sum=*x+*y;
	cout<<"sum is :"<<sum;

}