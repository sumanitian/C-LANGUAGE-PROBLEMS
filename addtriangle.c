#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
                printf("Triangle can be formed.");
            }
            else
            {
                printf("Triangle cannot be formed.");
            }
        }
        else
        {
            printf("Triangle cannot be formed.");
        }
    }
    else
    {
        printf("Triangle cannot be formed.");
    }
    return 0;
}