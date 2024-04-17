#include <stdio.h>
#include <stdlib.h>

int main(){
int lado, linha, coluna;
char f;
printf("Selecione o lado do seu quadrado:\n");
printf("Selecione entre, c, b, p, s, h e v para seu tipo de quadrado:\n");
scanf("%d%*c", &lado);
scanf("%c%*c", &f);
switch(f){
case'c':
    for(linha=1; linha<=lado; linha++){
        for(coluna=1; coluna<=lado; coluna++){
            printf("*");
        }
        printf("\n");
    }
    break;
case'b':
    for(linha=1; linha<=lado; linha++){
        for(coluna=1; coluna<=lado; coluna++){
            if(linha==1 || linha==lado || coluna==1 || coluna==lado){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    break;
case'p':
    for(linha=1; linha<=lado; linha++){
        for(coluna=1; coluna<=lado; coluna++){
            if(linha==1 || linha==lado || coluna==1 || coluna==lado || linha==coluna){
                printf("*");

            }
            else{
                printf(" ");
            }
         }
         printf("\n");

    }
    break;
case's':
    for(linha=1; linha<=lado; linha++){
        for(coluna=1; coluna<=lado; coluna++){
            if(linha==1 || linha==lado || coluna==1 || coluna==lado || linha+coluna==lado+1){
                printf("*");

            }
            else{
                printf(" ");
            }
         }
         printf("\n");

    }
    break;
case'h':
    for(linha=1; linha<=lado; linha++){
        for(coluna=1; coluna<=lado; coluna++){
            if(linha==1 || linha==lado || coluna==1 || coluna==lado || linha==(lado/2)){
                printf("*");

            }
            else{
                printf(" ");
            }
         }
         printf("\n");

    }
    break;
case'v':
    for(linha=1; linha<=lado; linha++){
        for(coluna=1; coluna<=lado; coluna++){
            if(linha==1 || linha==lado || coluna==1 || coluna==lado || coluna==(lado/2)){
                printf("*");

            }
            else{
                printf(" ");
            }
         }
         printf("\n");

    }
    break;
    default:
printf("nao reconheço essa opçao");

}



return 0;
}
