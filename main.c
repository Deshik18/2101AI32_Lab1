#include <stdio.h>
#include <stdlib.h>

float subNumbers(float x, float y){
    return x-y;
}

int main()
{
    float x,y;
    printf("Enter two numbers for subtraction : ");
    scanf("%f",&x);
    scanf("%f",&y);

    printf("The difference of two numbers is %f",subNumbers(x,y));
    return 0;
}
