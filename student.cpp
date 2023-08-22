// C++ program to create class for a student

#include <iostream>
using namespace std;

class student {
private:
    char name[30];
    int rollNo;
    char gender[20];
    int dob;
    int total;
    float perc;

public:
    void getDetails(void);
    void putDetails(void);
};

//member function definition, outside of the class
void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: "<<endl;
    cin >> rollNo;
    cout<<"select your gender"<<endl;
    cin>>gender;
    cout<<"enter your dob"<<endl;
    cin>>dob;
    cout << "Enter total marks outof 500: "<<endl;
    cin >> total;

    perc = (float)total / 500 * 100;
}

//member function definition, outside of the class
void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name <<"\n"<< "Roll Number:" << rollNo <<"\n" <<"gender:" <<gender <<"\n" <<"date of birth:" <<dob<<"\n" << "Total:" << total <<"\n"<< "Percentage:" << perc;
}

int main()
{
    student std; //object creation

    std.getDetails();
    std.putDetails();

    return 0;
}
