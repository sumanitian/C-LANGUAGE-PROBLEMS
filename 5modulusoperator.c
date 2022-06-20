#include<stdio.h>
void main()
{
    int n;
    printf("Enter Any Number\n");
    scanf("%d",&n);
    (n>=0)?printf("%d",n):printf("%d",-n);
}