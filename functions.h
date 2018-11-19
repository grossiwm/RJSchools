#ifndef RJSCHOLLS2_FUNCTIONS_H
#define RJSCHOLLS2_FUNCTIONS_H

#include "tab_csv.h"
#include "project_includes.h"

void le_cabecalho(FILE * f, char cabecalho[4]);


void imprime_atribs(string_t * atribs);


lista_atributos_t * le_atribs(FILE * file, char * linha);

#endif //RJSCHOLLS2_FUNCTIONS_H
