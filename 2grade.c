#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<50)
    {
        printf("Grade F");
    }
    else if(marks>=50 && marks<70)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks<90)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade A");
    }
}