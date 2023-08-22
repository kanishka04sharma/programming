#include<iostream>
using namespace std;
class Student{
private:
	char name[30];
	int rollNo;
public:
	Student(){
		cin>>name;
		cin>>rollNo;

	}
	void display(){
		cout<<"name is :"<<name<<"\n"<<"rollNo :"<<rollNo<<endl;
	}

};
int main(){
	Student s1;
	s1.display();
}