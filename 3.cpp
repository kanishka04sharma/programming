#include<iostream>
using namespaces std;
class Rectangle{
	private:
	int lenght;
	int bridth;
	int area;
	public:
		Rectangle()
		{
		length=4;
		bridth=5;
		}	
void inputfunction(){
	cin>>lenght>>bridth;
}
	void areafxn(){
		area=length*bridth;
	}
	void display(){
		cout<<lenght<<bridth;
		cout<<"\n"<<"area"<<area;
	}


};
int main(){
	Rectangle r1;
	r1.areafxn();
	r1.display();
}

