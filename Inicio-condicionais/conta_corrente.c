<<<<<<< HEAD
#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    int y1 = x/100000;
    int y2 = (x - (y1*100000)) / 10000;
    int y3 = (x - ((y1*100000) + (y2*10000))) / 1000;
    int y4 = (x - ((y1*100000) + (y2*10000) + (y3*1000))) / 100;
    int y5 = (x - ((y1*100000) + (y2*10000) + (y3*1000) + (y4*100))) / 10;
    int y6 = (x - ((y1*100000) + (y2*10000) + (y3*1000) + (y4*100) + (y5*10))) / 1;

    int verificador = 11 - (((y6*2)+(y5*3)+(y4*4)+(y3*5)+(y2*6)+(y1*7)) % 11);
    
    printf("%d", verificador);

    return 0;
=======
#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    int y1 = x/100000;
    int y2 = (x - (y1*100000)) / 10000;
    int y3 = (x - ((y1*100000) + (y2*10000))) / 1000;
    int y4 = (x - ((y1*100000) + (y2*10000) + (y3*1000))) / 100;
    int y5 = (x - ((y1*100000) + (y2*10000) + (y3*1000) + (y4*100))) / 10;
    int y6 = (x - ((y1*100000) + (y2*10000) + (y3*1000) + (y4*100) + (y5*10))) / 1;

    int verificador = 11 - (((y6*2)+(y5*3)+(y4*4)+(y3*5)+(y2*6)+(y1*7)) % 11);
    
    printf("%d", verificador);

    return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}