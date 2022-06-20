#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    double degree;
    float PI=3.142;
    printf("Enter Your Choice (1 for sin, 2 for tan, any choice for tan ): ");
    scanf("%c", &ch);
    printf("Enter your angle value in degree : ");
    scanf("%lf", &degree);
    double radian = degree * (PI / 180);

    switch(ch){
        case '1':
            printf("sin value is %lf \n", sin(radian));
            break;
        case '2':
            printf("cos value is %lf \n", cos(radian));
            break;
        default:
            printf("tan value is %lf \n", tan(radian));
            break;
    }
    return 0;
}