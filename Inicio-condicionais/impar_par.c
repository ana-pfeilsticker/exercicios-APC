#include <stdio.h>

int main(){
    int e1, ja, jb;
    int e2, jc, jd;
    int e3, jf1, jf2;
    char vencedor1, vencedor2, vencedorfinal;
    char resultado1, resultado2, resultadofinal;

    scanf("%d %d %d", &e1, &ja, &jb);
    scanf("%d %d %d", &e2, &jc, &jd);
    scanf("%d %d %d", &e3, &jf1, &jf2);
    resultado1 = (ja+jb)%2;
    resultado2 = (jc+jd)%2;
    resultadofinal = (jf1+jf2)%2;
    

    if (e1 == 0){
        if (resultado1 == 0){
            vencedor1 = 'A';
        }
        else{
            vencedor1 = 'B';
        }
    }
    if (e1 == 1){
        if (resultado1 == 0){
            vencedor1 = 'B';
        }
        else{
            vencedor1 = 'A';
        }
    }
    if (e2 == 0){
        if (resultado2 == 0){
            vencedor2 = 'C';
        }
        else{
            vencedor2 = 'D';
        }
    }
    if (e2 == 1){
        if (resultado2 == 0){
            vencedor2 = 'D';
        }
        else{
            vencedor2 = 'C';
        }
    }
    if (e3 == 0){
        if (resultadofinal == 0){
            vencedorfinal = vencedor1;
        }
        else{
            vencedorfinal = vencedor2;
        }
    }
    if (e3 == 1){
        if (resultadofinal == 0){
            vencedorfinal = vencedor2;
        }
        else{
            vencedorfinal = vencedor1;
        }
    }


    printf("%c",vencedorfinal);


    return 0;
}