#include<bits/stdc++.h>
using namespace std;
class Car{
	int year;
	string model,make;
	public:
	Car(int yr,string mdl,string m){
	year=yr;
	model=mdl;
	make=m;
	}
	void displayInfo()
	{
	cout<<"year:"<<year<<endl;
	cout<<"model:"<<model<<endl;
	cout<<"make:"<<make<<endl;
	}
};
int main(){
	Car car(2000,"a6","audi");
 	car.displayInfo();
}
