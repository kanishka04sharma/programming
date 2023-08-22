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
	if(*x%2==0){
	cout<<"even"<<endl;
}else{
	cout<<"odd"<<endl;
}
}