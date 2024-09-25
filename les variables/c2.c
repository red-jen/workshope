#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float temp;
    printf("ientrez la temperature en celsius :  ");
    scanf("%.2f",&temp);
    float kelvin = temp + 273.15;
    printf("\n c'est la temperature en kelvin %.2f",kelvin);
    return 0;
    
}