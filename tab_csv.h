#ifndef TCSV_H
    #define TCSV_H

#define MAX_STRING_SIZE 100
#define MAX_VALUES 1000


typedef char * string_t[MAX_STRING_SIZE];

typedef struct lista_atributos{
    string_t * atribs;
} lista_atributos_t;

typedef string_t * registro_t[MAX_VALUES];

typedef struct lista_registros{
    registro_t * regs;
} lista_registros_t;

typedef struct tab_csv{
    lista_atributos_t * atributos;
    lista_registros_t * registros;
} tab_csv_t;






#endif