#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check whether it is even or odd\n");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}