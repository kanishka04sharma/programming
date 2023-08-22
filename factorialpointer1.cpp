#include<iostream>
using namespace std;
int factor(int *a);
int main(){
	int n;
	int *a;
	cin>>n;
	a=&n;
	factor(a);
}
int factor(int *a){
	int fact=1;
	for(int i=1;i<=*a;i++){
	fact=fact*i;

	}
	cout<<fact;
}