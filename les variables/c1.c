#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int age;
    char name[25] ,email[45];
    char sexe [16];
    printf("inter your full name :  ");
    fgets(name,sizeof(name),stdin);
    printf("inter your age :  ");
    scanf("%d",&age);
    printf("inter your sexe : ");
    scanf("%s", sexe);
    printf("inter your email :  ");
    scanf("%s",&email);


    printf("%s ",name);
    printf("%d \n",age);
    printf("%s \n",sexe);
    printf("%s \n",email);
    return 0;

}