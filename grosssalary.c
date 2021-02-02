//Write a program to take basic salary of an employee and calculate gross salary. DA is 15% of basic salary, HRA is 13% of Basic Salary and TA is 10% of basic salary.
#include<stdio.h>
main(){
    float basicSalary, DA, HRA, TA, grossSalary;
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    DA = (basicSalary*15)/100;
    HRA= (basicSalary*13)/100;
    TA= (basicSalary*10)/100;
    grossSalary= basicSalary+DA+HRA+TA;
    printf("The Gross Salary is %f", grossSalary);
}
