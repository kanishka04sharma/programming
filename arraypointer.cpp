#include<iostream>
using namespace std;
int main(){
	int *pt;
	int marks[10];
	cout<<"entr teh element of array"<<endl;
	for(int i=0;i<=10;i++)
	{
		cin>>marks[i];
	}
	pt=marks;
	cout<<"the value off p is"<<*pt<<endl;
	cout<<"the value off marks is"<<*marks<<endl;
	return 0;
}
