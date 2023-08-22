#include <iostream>
using namespace std;
int main(){
	int a=10,b=20;
	int *p1=&a,*p2=&b;
	cout<<"Before swap: ∗p1="<<*p1<<" ∗p2="<<*p2<<endl;  
	 *p1=*p1+*p2;
	 *p2=*p1-*p2;
	 *p1=*p1-*p2;
	 cout<<"after swap: *p1="<<*p1<<" *p2="<<*p2<<endl;
	 return 0;
	}
