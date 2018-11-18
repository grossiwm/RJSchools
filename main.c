#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tab_csv.h"
#include "functions_csv.h"

void le_cabecalho(FILE * f, char cabecalho[4]){
    cabecalho[0] = fgetc(f);
    cabecalho[1] = fgetc(f);
    cabecalho[2] = fgetc(f);
    cabecalho[3] ='\0';
}


void imprime_atribs(string_t * atribs){
    printf("\n");
    for (int i = 0; i < 30; i++){       
        printf(" < %s > ", atribs[i]);    
    }
    printf("\n");
}

typedef struct lista_atributos{
    string_t * atribs;
}lista_atributos_t;

char linha[1000];

lista_atributos_t * le_atribs(FILE * file, char * linha){
    int i =0;
    int cont = 0;

    int num_atribs = 0;

    string_t temp;

    string_t * strings = malloc(sizeof(string_t)*100);

    // lista_atributos_t * lista = malloc(sizeof(lista_atributos_t));

    if (fgets(linha,1000,file) != NULL){
        while(linha[i] != '\0'){
            if (linha[i] == ','){
                temp[cont + 1] = '\0';
                strcpy(strings[num_atribs], temp);
                cont = 0;
                num_atribs += 1;

            }else{
                temp[cont] = linha[i];
                cont += 1;
            } 
        i += 1;
        }   
        
    }
    lista_atributos_t * lista = malloc(sizeof(lista_atributos_t) + sizeof(string_t)*num_atribs);

    lista -> atribs = strings;

    free(strings);

    return lista;
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

    lista_atributos_t * lista = le_atribs(csvf,linha);

    string_t * atribs = lista -> atribs;

    printf("\n%p", lista);
    printf("\n%p", atribs);

    printf("\n%s\n", atribs[2]);

    imprime_atribs(atribs);
    
    

    // printf("\n%c\n",linha[0]);

    // char gogo[4] = "agga";

    // string_t a;

    // strcpy(a,gogo);

    // printf("\n%s\n", a);
    // printf("\n%s\n", gogo);

    return 0;

}
