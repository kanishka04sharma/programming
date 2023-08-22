#include<bits/stdc++.h>
using namespace std;
class Person{
	private:
	string name;
	int age;
	string occupation;

	public:
	void setmethod()
	{
	cin>>name;
	cin>>age;
	cin>>occupation;
	}
	void displayInfo()
	{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"occuption:"<<occupation<<endl;
	}
};
int main(){
	//datatye object
	Person p1;
	p1.setmethod();
	p1.displayInfo();

}
