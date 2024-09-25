#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float eau;
    printf("entrez la temperature de l'eau  : ");
    scanf("%f",&eau);
    if(eau < 0){
        printf("l'eau est solid");
         }
        else if(eau <= 100 && eau >=0){
            printf("l'eau est liquide");
            }
        
            else if(eau > 100){
                printf("l'eau est gazeux");
            };

        
   
    return 0;
}