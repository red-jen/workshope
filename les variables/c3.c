#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float k;
    printf("entrez la distance en kilometre :  ");
    scanf("%f",&k);
    float y = k * 1093.61;
    printf("\n la distance en yards est %.4f",y);
    return 0;
}