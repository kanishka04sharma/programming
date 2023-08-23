#include<iostream>
using namespace std;
int mcq(int *a,int *b,int **c,int **d);
	
int main(){
	int x=5;
	int y=10;
	int *a;
	a=&x;
	int *b;
	b=&y;
	int **c;
	c=&b;
	int **d;
	d=&a;
	*a=**c+15;
	cout<<(x)<<"\n"<<(y)<<"\n"<<(*a)<<"\n"<<(*b)<<"\n"<<(**c)<<"\
	n"<<(**d);

}