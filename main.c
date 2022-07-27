#include <stdio.h>
#include <stdlib.h>

float multiply(float x, float y){
    return x*y;
}

int main()
{
    float x,y;
    printf("Enter two numbers for multiplication : ");
    scanf("%f",&x);
    scanf("%f",&y);

    printf("The difference of two numbers is %f",multiply(x,y));
    return 0;
}
