#include <stdio.h>
 
int main()
{
  
    float t,s,r;
    char choice;
 
    printf("enter the area of rectengle "); 
    printf("enter the area of tringle");
    printf("please enter the area of square");
    printf("\nEnter your choice (area, volume): ");
    scanf("%c",&choice);
 
    if(choice =='t'){
        printf("\nEnter the area of tringle: ");
        scanf("%f",&t);
        float b,h;
        t=(b*h)/2;
        printf("area of tringle: %f",t);
    }
    else if(choice=='r'){
        printf("\nEnter the area of recrengle ");
        scanf("%f",&r);
        float l,b;
        r=l*b;
        printf("Temperature in Fahrenheit: %f",r);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}
