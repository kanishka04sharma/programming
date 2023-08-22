#include<bits/stdc++.h>
using namespace std;
class Person{
	public:
	string name;
	int age;
	string occupation;

	public:
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
	p1.name="kanishka";
	p1.age=23;
	p1.occupation="xyz";
	p1.displayInfo();
	

}

