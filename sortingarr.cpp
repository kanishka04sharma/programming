#include<iostream>
using namespace std;
int min(int a,int b)
//{
//	if(a>b)
//	{
//		return b;
//	}
//
//}
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	int temp;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int m=a[i+1];
		for(int j=i+1;j<n;j++)
		{
			if(m>a[j])
			{
				m=a[j];
			}
		}
	if(m<a[i])
		{
			int ti;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==m)
				{
					ti=j;
				}
			}
	    	swap(a[ti],a[i]);
		}

   }
   for(int i=0;i<n;i++){
   
   cout<<a[i]<<endl;
}
}
