#include<iostream>
using namespace std;
int timeconvert(int *s);
int main() {
int sec;
cin>>sec;
int *s;
s=&sec;
timeconvert(s);
	
}
int timeconvert(int *s){
	int hours = *s/ 3600;
	int minute = (*s % 3600) / 60;
	int second = *s% 60;
	cout << hours << ":" << minute << ":" << second << endl;

}