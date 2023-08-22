#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	for(int i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
			if(a[i]>a[j]){
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<num;i++){
		cout<<a[i];
	}
}
