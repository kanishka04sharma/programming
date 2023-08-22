#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		int temp=0;
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
				
				temp=1;
				break;
			}
			}
		}
	
		if(temp==0){
			cout<<"unique no is " <<a[i]<<endl;
		}
	}
}

