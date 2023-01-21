#include <stdio.h>


int main(){

    int S; // quantidade de strings na matriz base
    int P; //quantidade de strings na matriz a ser comparada
    int c = 0; //contador para montar a matriz

 //pegando o P e o S e declarando as matrizes
    scanf("%d%d", &S, &P);
    char matrizS[S][82];
    char matrizP[P][82];

 //criando a matriz S
    while (c< S){
        scanf("%s", matrizS[c]);
        c++;
    } 

 //setando o c para zero novamente
    c = 0;
    
 //criando a matriz P
    while (c< P){
        scanf("%s", matrizP[c]);
        c++;
    }








    return 0;
}