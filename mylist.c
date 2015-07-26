
/*==========================================================================

============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct mylist{
    int info; //Information field
    struct mylist *link; // self referential structure


}Node;

int main()
{
    //Creation of the nodes
    Node *a =(Node*) malloc(sizeof(Node));
    Node *b =(Node*) malloc(sizeof(Node));
    Node *c =(Node*) malloc(sizeof(Node));

    a->link = NULL;
    b->link = NULL;
    c->link = NULL;

    printf("a data = ?");
    scanf("%d", &a->info);
    printf("b data = ?");
    scanf("%d", &b->info);
    printf("c data = ?");
    scanf("%d", &c->info);

    //Link the nodes

    a->link = b;
    b->link = c;

    printf("\n\t");

    while(a!=NULL){
        printf("%d->", a->info);
        a=a->link;
    }
    printf("null");



}
