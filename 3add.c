// Write a c program to add two integers entered by the user.

#include<stdio.h>
void main()
{
    int num1,num2,sum;
    printf("Enter the number1\n");
    scanf("%d",&num1);
    printf("Enter the number2\n");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("The sum of the two number is: %d",sum);
}