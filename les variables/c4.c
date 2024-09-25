#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float km;
    printf("entrez la vitesse en km/h :  ");
    scanf("%f",&km);
    float ms = km * 0.27778 ;
    printf("\n la vitesse en m/s est : %.4f",ms);
    return 0;
}