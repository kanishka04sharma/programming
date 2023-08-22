#include<iostream>
using namespace std;
int main(){
	int n,rev,sum;
	cin>>n;
	while(n>9)
	{
		sum=0;
		while(n>0)
		{
			rev=n%10;
			sum=sum+rev;
			n=n/10;
		}
		//	n=sum;
	
	}
		cout<<sum;
}
