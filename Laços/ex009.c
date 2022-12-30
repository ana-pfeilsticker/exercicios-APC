#include <stdio.h>
int main(){
    int qntrestaurantes;
    int verificadorrestaurabtes = 0;
    int dia = 1;
    int codigorestaurante;
    int notarestaurante;
    int maiornota = -1;
    int menornumero = -1;
    int restaurantevencedor;


    while(scanf("%d", &qntrestaurantes) != EOF){


        while (verificadorrestaurabtes < qntrestaurantes){
            scanf("%d", &codigorestaurante);
            scanf("%d", &notarestaurante);
            if ((notarestaurante > maiornota)||((notarestaurante == maiornota)&&(codigorestaurante< menornumero)))
            {
                maiornota = notarestaurante;
                restaurantevencedor = codigorestaurante;
                menornumero = codigorestaurante;
            }
            verificadorrestaurabtes ++;
        }
        printf("Dia %d\n", dia);
        dia ++;
        printf("%d\n", restaurantevencedor);
        printf("\n");


    verificadorrestaurabtes = 0;
    maiornota = -1;
    menornumero = -1;

    }

    return 0;
}
