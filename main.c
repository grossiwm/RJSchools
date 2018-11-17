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

typedef struct lista_atributos{
    string_t * atribs;
}lista_atributos_t;

int num_atribs = 0;

string_t * le_atribs(FILE * file, int * num_atribs){

    string_t * atribs = malloc(sizeof(string_t)*(10000));
    int i = 0;
    int cont = 0;

    string_t atrib_temp;

    string_t vazio = {"\0"};
    char * linha = malloc(sizeof(char)*10000);

    if (fgets(linha,10000,file)){
        while(linha[i] != '\0'){
            if(linha[i] == ','){
                atrib_temp[cont] = vazio[0];
                strcpy(atribs[*num_atribs], atrib_temp);
                strcpy(atrib_temp,vazio);

                cont = 0;

            }else{
                atrib_temp[cont] = linha[i];
                cont += 1;
            }
        }
        i += 1;
    }

    return atribs;

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

    
    string_t * atribs = le_atribs(csvf,&num_atribs);

    printf("%s", atribs[0]);

    return 0;

}
