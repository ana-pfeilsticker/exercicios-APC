#include <stdio.h> 
int main(){


    //criando a string da frase que vai ser analisada
    char frase[11000];


    //string da palavra da frase
    char palavraoriginal[1000];



    //string da palavra que vai substituir a original
    char substituta[1000];



    char palavradafrase[1000];

    char frasefinal[11000];



    //recebendo as strings
    scanf("%[^\n]s", frase);
    scanf("%s", palavraoriginal);
    scanf("%s", substituta);

    //agora que o negocio fica cabuloso k, nao sei oq fazer...
    int a =0;
    int qntpalavra = 0;
    while( frase[a] != '\0'){
        if (frase[a] == ' '){
            qntpalavra ++;
        }
        a++;
    }

    int i = 0; //indice da frase
    int j = 0; //indice da palavra separada da frase
    int k =0;
    int l =0;
    int c = 1;
    int m =0;
    int v = 0;
    int sla =0;
    while (i < qntpalavra+1){
        m =0;
        c =1;
        v = 0;
        sla =0;
        //começo do while
        while ((frase[j] != ' ')&&(frase[j]!='\0')){
            palavradafrase[k] = frase[j];
            if (((palavradafrase[k] >= 65)&&(palavradafrase[k]<=90))||((palavradafrase[k] >=97)&&(palavradafrase[k]<=122))){
                sla = 1;
            }
            j++;
            k++;
        }//final do while
        palavradafrase[k] = '\0';
        k = 0;



        while (palavradafrase[k] != '\0'){
            if (palavradafrase[k] != palavraoriginal[v]){
                if (((palavradafrase[k] >= 65)&&(palavradafrase[k]<=90))||((palavradafrase[k] >=97)&&(palavradafrase[k]<=122))){
                    c = 0;
                    v++;
                }        

            }
            if (palavradafrase[k]==palavraoriginal[v]){
                v++;
            }
            k++;
            
        }
            if (sla==0){
                c = 0;
            }
            if (((palavradafrase[0] < 65)||((palavradafrase[0]>90)&&(palavradafrase[0]<97))||(palavradafrase[0]>122))&&(c==1)){
            frasefinal[l] = palavradafrase[0];
                l++;
            }

            while((substituta[m] != '\0')&&(c ==1)){
                
                    
                frasefinal[l] = substituta[m];
                m++;
                l++;

            }
            if (((palavradafrase[k-1] < 65)||((palavradafrase[k-1]>90)&&(palavradafrase[k-1]<97))||(palavradafrase[k-1]>122))&&(c==1)){
            frasefinal[l] = palavradafrase[k-1];
                l++;
            }

            while((palavradafrase[m] != '\0')&&(c ==0)){
                frasefinal[l] = palavradafrase[m];
                m++;
                l++;

            }

            if (i<qntpalavra){
                frasefinal[l] = ' ';
                l++;
            }

        i++;
        j++;
        

        
        k = 0;}
        
        
    printf("%s\n", frasefinal);
    
    return 0;

    }