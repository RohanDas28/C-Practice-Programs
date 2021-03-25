//Write a program to take a number and check if the number is triple digit same number or not
#include<stdio.h>
main(){
    int x;
    printf("Enter the number \n");
    scanf("%d", &x);
    if (x>99 && x<1000)
    {
        if (x%111==0)
        printf("Triple Digit Same Number");
        else
        printf("Not a triple digit same number");
    }
    else("Not a Triple Digit number");
}