//Write a program to calculate the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
main(){
    int a,b,c,d;
    float x1,x2;
    printf("Enter a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    d=b*b-4*a*c;
    if(d==0){
        x1=-b/2*a;
        x2=-b/2*a;
        printf("%f %f", x1,x2);
    }
    else if(d>0){
        x1 = (-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
        printf("%f %f", x1,x2);
    }
    else{
        printf("Img.root");
    }
}