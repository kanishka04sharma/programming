#include <stdio.h>
 
int main()
{
  
    float fh,cl;
    char choice;
 
    printf("\n1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (f, c): ");
    scanf("%c",&choice);
 
    if(choice =='f'){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %f",cl);
    }
    else if(choice=='c'){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %f",fh);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}
