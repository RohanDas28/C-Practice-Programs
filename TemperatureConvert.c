#include<stdio.h>
main(){
    float f1,c1,f2,c2;
    //From Celcius To Fahrenheit
    printf("Enter the temperature to convert Celcius to Fahrenheit: ");
    scanf("%f", &c1);
    f1= (9*c1)/5+32;
    printf("%f \n", f1);
    //From Fahrenheit to Celcius
    printf("Enter the temperature to convert Fahrenheit to Celcius: ");
    scanf("%f", &f2);
    c2= (5*f2 - 160)/9;
    printf("%f \n", c2);

}