//Write a program to calculate the distance between 2 points in a 2D coordinate system
#include<stdio.h>
#include<math.h>
main(){
    float x1,x2,y1,y2,d;
    printf("Enter the first points \n");
    scanf("%f %f",&x1, &y1);
    printf("Enter the second points \n");
    scanf("%f %f",&x2, &y2);
    d= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%f",d);
}