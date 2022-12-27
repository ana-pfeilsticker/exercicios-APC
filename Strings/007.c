#include <stdio.h>
int main(){
    int qntpalavras;
    int i =0;
    int tamanho = 0;
    char palavra[10000];
    char palavramin[1000];
    
    scanf("%d", &qntpalavras);
    while (i< qntpalavras){
        char on = 'O';
        scanf("%s%n", palavra, &tamanho);
        int j = 0;
        while(palavra[j] != '\0'){
            if((palavra[j] >= 'a')&&(palavra[j] <= 'z')){
                palavramin[j] = palavra[j];
            }
            if((palavra[j] >= 'A')&&(palavra[j] <= 'Z')){
                palavramin[j] = palavra[j]+32;
            }
            j++;
        }
        palavramin[j] = '\0';
        j = 0;
        while(palavramin[j] != '\0'){


            if ((palavramin[j-1] > palavramin[j])&&(tamanho!=1)){
                on = 'N';
            }
            if (palavramin[j-1] == palavramin[j]){
                on = 'N';
            }
            j++;
        }
        printf("%s: %c\n", palavramin, on);
        i++;

    }

    return 0;
}