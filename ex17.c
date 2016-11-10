
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
void push(pilha **cabeca, char  c);
char   pop(pilha **cabeca);
char  operacao(char   n1,char   operador,char n2);
char  tamanho(pilha *cabeca);
int main(void)
{

    pilha *head=NULL, *head2=NULL;
    char   saida,n1,n2,sinal,result='0';
    char x,resultInt=0;
    char ent;

    while(ent != 'a')
    {
        scanf("%c",&ent);
        if(ent != '\n' && ent != 'a')
        {
            if( ent == '+' || ent == '-' || ent  == 'x'|| ent  == '/')
            {
                push(&head2,ent);
                n2=pop(&head);
                n1=pop(&head);
                result = operacao(n1-'0',ent,n2-'0');
                push(&head2,result);
                printf("resuuuuuuuuuuuuuult  %d ",result);

            }
            else
                push(&head,ent);
        }
    }
    return 0;
}
char operacao(char   n1,char operador,char n2)
{
    char    resultado ;

    printf("n1= %d \n n2 = %d\n",n1,n2);
    if('+'== operador)
    {
        printf("aaaaaaaaaaaaaaaaa\n");
        resultado = n1 + n2;
    }
    if('-' == operador)
        resultado = n1 - n2;
    if('x' == operador || '*'== operador)
        resultado = n1 * n2;
    if('/' == operador)
        resultado = n1 /n2;


    return resultado;
}

void push(pilha **cabeca,char  c)
{
    pilha *pp=*cabeca;
    pp=malloc(sizeof(pilha));
    pp->car=c;
    pp->prox=NULL;
    if(cabeca == NULL)
    {
        pp->prox=NULL;
        *cabeca=pp;
    }
    else
    {        
        pp->prox=*cabeca;
        *cabeca=pp;
    }
    return;
}

char pop(pilha **cabeca)
{ 
    char  car=0;
    pilha *primeiro=*cabeca;

    *cabeca=primeiro->prox;
    car=primeiro->car;
    free(primeiro);
    return car;
}

char  tamanho(pilha *cabeca)
{
    pilha  *point= cabeca;
    char i='0';

    while(point != NULL )
    {
        i++;
        point= point->prox;   
    }


    return i ;
}
