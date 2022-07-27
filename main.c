#include <stdio.h>
#include <stdlib.h>

float divide(float x, float y){
    return x/y;
}

int main()
{
    float x,y;
    printf("Enter two numbers for division : ");
    scanf("%f",&x);
    scanf("%f",&y);

    printf("The division of two numbers is %f",divide(x,y));
    return 0;
}
