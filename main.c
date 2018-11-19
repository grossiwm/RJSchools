#include "tab_csv.h"
#include "tab_csv.c"
#include "project_includes.h"
#include "functions.h"

char linha[1000];


int main() {

    FILE * csvf = fopen("/Users/gabrielrossi/Desktop/RJscholls2/Escolas_Municipais.csv", "r");

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



    return 0;

}
