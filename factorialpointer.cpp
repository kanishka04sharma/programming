#include <iostream>
using namespace std;

void findFactorial(int, int *);
int main()
{
    int i,fact,num;
    cout<<"Enter a number: \n";
    cin>>num;
    findFactorial(num, &fact);
    cout<<"Factorial of " <<num<< " is: "<<fact;
    return 0;
}
void findFactorial(int num, int *fact){
int i;
*fact=1;
for(i=1; i<=num; i++){//calculate factorial using for loop
*fact=*fact*i;
}
}

