// Write a c program to print cube of a given number.

#include<stdio.h>
void main()
{
  int number, cube;
  printf(" \nEnter any integer Value : ");
  scanf("%d", &number);
  cube = number * number * number;
  printf("Cube of a given number %d is  =  %d", number, cube);
}