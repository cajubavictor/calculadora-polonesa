
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1
/* Aqui vão as funcoes para fazer a pilha */

typedef struct st_pilha
{
    char  car;
    struct st_pilha *prox;
} pilha;
