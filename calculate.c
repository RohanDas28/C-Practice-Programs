//Write a program to calculate addition, substraction, multiplication, division and modulo operation using switch statement
#include<stdio.h>
main(){
    int a,b,c,n;
    float d;
    printf("Press 1 for addition \n");
    printf("Press 2 for subtraction \n");
    printf("Press 3 for multiplication \n");
    printf("Press 4 for division \n");
    printf("Press 5 for modulo \n");
    printf("Enter Your Choice \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter the numbers");
        scanf("%d %d", &a,&b);
        c=a+b;
        printf("%d",c);
        break;
    case 2:
        printf("Enter the numbers");
        scanf("%d %d", &a,&b);
        c=a-b;
        printf("%d",c);
        break;
    case 3:
        printf("Enter the numbers");
        scanf("%d %d", &a,&b);
        c=a*b;
        printf("%d",c);
        break;
    case 4:
        printf("Enter the numbers");
        scanf("%d %d", &a,&b);
        d=a/b;
        printf("%f",d);
        break;
    case 5:
        printf("Enter the numbers");
        scanf("%d %d", &a,&b);
        c=a%b;
        printf("%d",c);
        break;

    default:
        printf("Invalid Choice \n");
        break;
    }
}
