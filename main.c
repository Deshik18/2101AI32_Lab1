#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float addNumbers(float x, float y){
    return x+y;
}

int main()
{
    float x,y;
    printf("Enter two numbers :\n");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("Sum of the given numbers: %f",addNumbers(x,y));

    return 0;
}
