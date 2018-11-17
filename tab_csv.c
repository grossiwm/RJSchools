#include "tab_csv.h"

#define MAX_STRING_SIZE 100
#define MAX_VALUES 1000

typedef char[MAX_STRING_SIZE] string string_t;

struct lista_atributos{
    string_t * atribs;
};

struct registro{
    string_t * valores;
    int n;
    int n_max;
};

struct lista_registros{
    registro_t * regs;
};

struct tab_csv{
    lista_atributos_t * atributos;
    lista_registros_t * registros;
};

struct reg_filtr{
    string_t nome;
    string_t endereco;
    double lat, longe;
};

struct lista_reg_filtr{
    int n;
    int n_max;
    reg_filtr_t * regs_filtr;
};

