#include<iostream>
using namespace std;
class Person{
private:
	char name[20];
	int age;
public:
Person(){
	cout<<"enter teh name"<<endl;
	cin>>name;
	cout<<"enter the age"<<endl;
	cin>>age;
}
void display(){
	cout<<"name is:"<<name<<"\n"<<"age is: "<<age<<endl;
}
};
int main(){
	Person s1;
	s1.display();

}