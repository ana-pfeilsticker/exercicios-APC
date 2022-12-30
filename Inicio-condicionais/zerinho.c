#include <stdio.h>


int main(){
    int xa, xb, xc;
    scanf("%d %d %d", &xa, &xb, &xc); 
    if ((xa == xb) && (xa == xc)){
        printf("empate");
    
    }
    if((xa == xb) && (xa != xc)){
        printf("C\n");
    }
    if((xc == xb) && (xa != xc)){
        printf("A\n");
    }
            
    if((xa == xc) && (xa != xb)){
        printf("B\n");
    }

}