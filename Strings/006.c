#include <stdio.h>



int main(){
    char risada[1000];
    int invalido = 1;
    int tamanho;
    char frente[1000];
    char tras[1000];
    int i = 0;
    int j =0;
    int risadasn = 0;
    scanf("%s%n", risada, &tamanho);
    while (i < tamanho){
        if ((risada[i] == 'a')||(risada[i] == 'e')||(risada[i] == 'i')||(risada[i] == 'o')||(risada[i] == 'u')){
            
            frente[j] = risada[i];
            j++;
            invalido = 0;
        }


        i++;
    }
    if (invalido == 1){
    printf("Valor invalido!");
    return 0;
    }
    j = 0;

    while (tamanho >=0){
        if ((risada[tamanho] == 'a')||(risada[tamanho] == 'e')||(risada[tamanho] == 'i')||(risada[tamanho] == 'o')||(risada[tamanho] == 'u')){
            
            tras[j] = risada[tamanho];
            j++;

        }

        tamanho --;
    }

    i = 0;
    while (tras[i]!='\0'){
        if (tras[i] != frente[i]){
            risadasn = 1;
        }
        i++;
        
    }
    if ((risadasn == 1)&&(invalido!=1)){
        printf("N");
    }
        if (risadasn == 0){
        printf("S");
    }
    



    return 0;
}
