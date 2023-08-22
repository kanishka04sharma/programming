#include<iostream>
using namespace std;
class car{
	public:
	string model,brand;
	int mileage;

	int drive(int distance){
	mileage += distance;
	}
void show_data(){
	cout<<"brand"<<brand<<endl;
	cout<<"model"<<model<<endl;
	cout<<"distance deive"<<mileage<<"miles"<<endl;
	}
};
int main(){
	car my_car;

	my_car.brand="honda";
	my_car.model="acard";
	my_car.drive(50);

	my_car.show_data();
	return 0;
}