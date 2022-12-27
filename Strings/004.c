#include <stdio.h>
int main(){

    char nome[150000];
    int i =0;
    int tamanho;
    char primeiro[150000];
    char sobrenome[150000];
    char sobrenome2[15000];

    scanf("%[^\n]%n", nome, &tamanho);

    while(nome[i] != (' ')){
        primeiro[i] = nome[i];
        i++;
    }

    i = tamanho;
    int j = 0;
    while (nome[i] != (' ')){
        sobrenome[j] = nome[i];
        i--;
        j++;

    }
    i = j-1;
    j = 0;
    while (i>=0){
        sobrenome2[j] = sobrenome[i];
        i--;
        j++;
        
    }

    if ((primeiro[0] >='A')&&(primeiro[0]<='Z')){
        primeiro[0] = primeiro[0] + 32;
    }

    if ((sobrenome2[0] >='A')&&(sobrenome2[0]<='Z')){
        sobrenome2[0] = sobrenome2[0] + 32;
    }
    
    printf("%s.%s@unb.br", primeiro, sobrenome2);

    return 0;
}