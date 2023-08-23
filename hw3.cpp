#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int *x;
	x=&num;
	int **y;
	y=&x;
	**y=10;
	cout<<num<<endl;
}