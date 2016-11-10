
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
