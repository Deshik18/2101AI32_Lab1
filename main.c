#include <stdio.h>
#include <stdlib.h>

float addNumber(float x, float y){
    return x+y;
}

float subNumbers(float x, float y){
    return x-y;
}

float multiply(float x, float y){
    return x*y;
}

float divide(float x, float y){
    return x/y;
}



int main()
{
    float x,y;
    int z;
    printf("Enter two numbers : ");
    scanf("%f",&x);
    scanf("%f",&y);

    printf("Enter\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    scanf("%d",&z);

    switch(z){
    case 1:
        printf("The result of operation is %f",addNumber(x,y));
        break;
    case 2:
        printf("The result of operation is %f",subNumbers(x,y));
        break;
    case 3:
        printf("The result of operation is %f",multiply(x,y));
        break;
    case 4:
        printf("The result of operation is %f",divide(x,y));
        break;
    default :
        printf("Enter valid input");
    }
    return 0;
}
