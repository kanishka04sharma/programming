#include<bits/stdc++.h>
using namespace std;
class Car {
  private: 
  string make;
  string model;
  int year;

  public:
    Car(string mak, string mdl, int yr){
  		 make=mak;
  		 model=mdl;
  		 year(yr)
}

 
 string getmake() {
    return make;
  }

 string getModel() {
    return model;
  }

  int getYear() {
    return year;
  }

  void setmake(string make) {
    make = mak;
  }

  void setModel(string mdl) {
    model = mdl;
  }

  void setYear(int yr) {
    year = yr;
  }
};

int main() {
  Car car("AUDI", "A6", 2023);
 cout << "make: " << car.getCompany() << std::endl;
 cout << "Model: " << car.getModel() << std::endl;
 cout << "Year: " << car.getYear() << std::endl;

  // Set new values for the car
  car.setmake("BMW");
  car.setModel("M4");
  car.setYear(2022);
  return 0;
}