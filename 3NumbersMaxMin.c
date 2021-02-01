//Write a program to calculate the maximum among 3 numbers using conditional operator.
#include <stdio.h>
main(){
    int a,b,c,d;
    printf("Enter the Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d is max",d);
}