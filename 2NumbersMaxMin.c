//Write a program to take 2 numbers and check 2 numbers are equal or maximum.
#include<stdio.h>
main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a,&b);
    if (a==b){
    	printf("Both The Numbers Are Same");
    }
    else if (a>b)
    {
        printf("%d is Greater", a);
    }
    else
    {
        printf("%d is Greater", b);  
    }
