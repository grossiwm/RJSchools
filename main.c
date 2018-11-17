#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tab_csv.h"

void le_cabecalho(FILE * f, char cabecalho[4]){
    cabecalho[0] = fgetc(f);
    cabecalho[1] = fgetc(f);
    cabecalho[2] = fgetc(f);
    cabecalho[3] ='\0';
}

int main() {

//    printf("Hello, World!\n");
    

    FILE * csvf = fopen("Escolas_Municipais.csv", "r");

    if (!csvf){
        printf("\nArquivo não pode ser aberto.\n");
        exit(1);
    }else{
        printf("\nArquivo aberto com sucesso!\n");
    }

    char cabecalho[4];

    le_cabecalho(csvf,cabecalho);

    printf("\n%lu\n",strlen(cabecalho));


    return 0;

}
