#include<bits/stdc++.h>
using namespace std;
class Bankaccount{
	public:
	string name;
	int number;
	int balance;

	public:
	void displayInfo()
	{
	cout<<"holder name:"<<name<<endl;
	cout<<"Bankaccount number:"<<number<<endl;
	cout<<"balance :"<<balance<<endl;
	}
};
int main(){
	//datatye object
	Bankaccount p1;
	p1.name="kanishka";
	p1.number=2345567;
	p1.balance=200000;
	p1.displayInfo();
	

}

