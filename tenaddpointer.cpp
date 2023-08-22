#include<iostream>
using namespace std;
int add(int *x);
int main(){
	int n;
	cin>>n;
	int *x;
	x=&n;
	add(x);

}
int add(int *x){
	int y;
	y=*x+10;
	cout<<y;
}