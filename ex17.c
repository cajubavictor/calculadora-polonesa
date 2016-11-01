
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
/* Aqui vão as funcoes para fazer a pilha */

typedef struct st_pilha
{
    char car;
    struct st_pilha *prox;
} pilha;

void push(pilha **cabeca, char c);
float pop(pilha **cabeca);

int main(void)
{

    char str[MAX];
    pilha *head=NULL;
    int ent=1,saida=0,s='+';

    printf("Escreva a funcao  na forma polonesa:\n %d",);
                                        
    while(ent!= 0)
    {
        scanf("%d",&ent);
        push(&head,ent);

    }
    while(head != NULL)
    {
        saida= pop(&head);
        printf("saida %d",saida);
    }
    return EXIT_SUCCESS;
}
int operaçao(int n1,int operador,int n2)
{
    resultado  
  
}



void push(pilha **cabeca, char c)
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
float pop(pilha **cabeca)
{ 
    char car='0';
    pilha *primeiro=*cabeca;

    *cabeca=primeiro->prox;
    car=primeiro->car;
    free(primeiro);
    return car;
}



