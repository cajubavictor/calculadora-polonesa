
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
void push(pilha **cabeca, int  c);
int   pop(pilha **cabeca);
int  operacao(int  n1,int   operador,int n2);
int  tamanho(pilha *cabeca);
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

void push(pilha **cabeca,int  c)
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

int  pop(pilha **cabeca)
{ 
    int  car=0;
    pilha *primeiro=*cabeca;

    *cabeca=primeiro->prox;
    car=primeiro->car;
    free(primeiro);
    return car;
}

int  tamanho(pilha *cabeca)
{
    pilha  *point= cabeca;
    int i='0';

    while(point != NULL )
    {
        i++;
        point= point->prox;   
    }


    return i ;
}
