#include <stdio.h>
#include <stdlib.h>

int main(){


    int qntstr;
    scanf("%d", &qntstr);
    char mensagemcodificada[1500];
    char mensagem[1500];
    
    int i =0;
    int j =0;


    while (i <= qntstr){


        fgets(mensagem, 1500, stdin);
        while(mensagem[j] != '\0'){
            if ((mensagem[j]>= 'A')&&(mensagem[j]<='M')){
                mensagemcodificada[j] = mensagem[j] + 13;
        }
            if ((mensagem[j]>= 'N')&&(mensagem[j]<='Z')){
            mensagemcodificada[j] = mensagem[j] - 13;
        }
            if((mensagem[j]<'A')||(mensagem[j] > 'Z')){
                mensagemcodificada[j] = mensagem[j];
        }
        mensagemcodificada[j+1] = '\0';
            j++;
    }
        printf("%s", mensagemcodificada);
        
        j = 0;

        i++;



}

    return 0;
}