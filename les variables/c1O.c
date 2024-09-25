#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float r;
    const float pi=3.14;
    printf("entrer le royaume de sphere :  ");
    scanf("%f",&r);
    float volume = (4.0/3.0)*pi*pow(r,3);
    printf("Volume de cette sphère = %.4f",volume);



return 0;

}