#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int *x;
	x=&num;
	int **y;
	y=&x;
	cout<<*x<<endl;
	cout<<**y<<endl;


}
