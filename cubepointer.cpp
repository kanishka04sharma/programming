#include<iostream>
using namespace std;
int cube(int *x);
int main(){
int n;
cin>>n;
int *x;
x=&n;
cube(x);
}
int cube(int *x){
	int fact;
	fact=(*x) * (*x) * (*x);
	cout<<fact;
}

