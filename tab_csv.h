#ifndef TCSV_H
    #define TCSV_H

#define MAX_STRING_SIZE 100
#define MAX_VALUES 1000


typedef char * string_t[MAX_STRING_SIZE];

typedef struct lista_atributos{
    string_t * atribs;
} lista_atributos_t;

typedef struct registro{
    string_t * valores;
    int n;
    int n_max;
}registro_t;

typedef struct lista_registros{
    registro_t * regs;

} lista_registros_t;

typedef struct tab_csv{
    lista_atributos_t * atributos;
    lista_registros_t * registros;
} tab_csv_t;

typedef struct reg_filtr{
    string_t nome;
    string_t endereco;
    double lat, longe;
}reg_filtr_t;

typedef struct lista_reg_filtr{
    int n;
    int n_max;
    reg_filtr_t * regs_filtr;
}lista_reg_filtr_t;


#endif