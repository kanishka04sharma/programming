#include<bits/stdc++.h>
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
    void setdetails(void);
    void putDetails(void);
};

//member function definition, outside of the class
void student::getDetails(void)
{
    cout << "Enter name:"<<endl;
    cout << "Enter roll number: "<<endl;
    cout<<"select your gender"<<endl;
     cout<<"enter your dob"<<endl;
      cout << "Enter total marks outof 500: "<<endl;
   

   
}
void student ::setdetails(){
    cin >> name;
    cin >> rollNo;
    cin>>gender;
    cin>>dob;
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
    std.setdetails();
    std.putDetails();

    return 0;
}
