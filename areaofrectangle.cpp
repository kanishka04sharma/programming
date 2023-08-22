#include<bits/stdc++.h>
using namespace std;
class Rectangle{


	
	int len,wid;

	public:
	void getdetails(int l,int w){
	len=l;
	wid=w;
	}
	int area(){
	return len*wid;
	}

};
int main(){
	Rectangle r1, r2;
    r1.getdetails(10, 9);
    r2.getdetails(8, 6);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
}