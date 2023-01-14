#include <stdio.h>
int contarEstrelas(int qtd, int abertura){
    int i =0;
    int cont = 0;
    long int receba;
    long int fotons;
    while (i<qtd){
        scanf("%ld", &fotons);
        receba = abertura*fotons;
        if (receba >= 40000000){
            cont++;
        }
        i++;
       
    }
    return cont;
    
}

