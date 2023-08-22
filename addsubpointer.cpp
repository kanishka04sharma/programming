 #include<iostream>
 using namespace std;

 int sum(int *ptr1,int *ptr2,int *s,int *d ){
 *s=*ptr1+*ptr2;
 *d=*ptr1-*ptr2;
 }

 int main(){
 int n,m,add=0,diff=0;
 cin>>n>>m;
 int *ptr1=&m;
 int *ptr2=&n;
 int *s=&add;
 int *d=&diff;
 sum(ptr1,ptr2,s,d);
 cout<<*s<<"\n";
 cout<<*d;
 }
