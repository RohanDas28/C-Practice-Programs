//Write a program to take 2 numbers and check 2 numbers are equal or maximum.
#include<stdio.h>
main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a,&b);
    if (a!=b){
        if (a>b)
    {
        printf("A is Greater Than B");
    }
    else
    {
        printf("A Less Than B");  
    }
    }
    else{
        printf("A and B are the same");
    }
}
