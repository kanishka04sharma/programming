#include<iostream>
using namespace std;
int sum(int *x);
int main(){
	int n;
	cin>>n;
	int *x;
	x=&n;
	sum(x);
}
int sum(int *x){
	int sum=0;
	for(int i=0;i<=*x;i++){
		sum+=i;
	}
	cout<<sum;

	
}