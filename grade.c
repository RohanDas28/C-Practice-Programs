//Write a program to calculate the grade of a student whose 5 marks are given by the user. (Grades: above 90 Grade O, above 80 E, above 70 A, above 60 B, above 50 C, above 40 D, below 40 F)
#include <stdio.h>
main(){
    int m1,m2,m3,m4,m5,avg;
    printf("Enter the numbers: \n");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    avg=(m1+m2+m3+m4+m5)/5;
    if (avg>90)
    printf("O");
    else if (avg>80)
    printf("E");
    else if (avg>70)
    printf("A");
    else if (avg>60)
    printf("B");
    else if (avg>50)
    printf("C");
    else if (avg>40)
    printf("D");
    else if (avg<40)
    printf("F");
}