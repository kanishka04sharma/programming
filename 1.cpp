#include<bits/stdc++.h>
using namespace std;
class Person{
	public:
	string name;
	int age;

	public:
	void displayInfo()
	{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	}
};
int main(){
	//datatye object
	Person p1;
	p1.name="kanishka";
	p1.age=19;
	p1.displayInfo();
	

}

