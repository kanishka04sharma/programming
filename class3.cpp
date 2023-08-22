#include<iostream>
#include <string.h>
using namespace std;
class Book{
private:
	string title,author;
	int year;
public:
	Book(){
	
		title="Anonnyom";
		author="Anonnyom";
		year=0000;
	}
	void displayInfo(){
		cout<<"Title: "<<title<<"\n"<<"Author: "<<author<<endl;
	}
	Book(int y){
		year=y;
	}
	int showdetails(){
		cin>>year;
	}
	void print(){
		cout<<"publishing :"<<year<<endl;
	}

};
int main(){
	Book s1;
	s1.displayInfo();
	s1.showdetails();
	s1.print();


}