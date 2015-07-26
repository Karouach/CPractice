
/*==========================================================================

============================================================================*/

#include<stdio.h>
#include<stdlib.h>


struct node {
    int info;
    struct mylist *link;
};

void display(struct node *start);


int main()
{
    struct node *start = NULL;
    int choice;
    while (1){
        printf("1. Display\n\n");
        printf("9. Exit\n\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                display(start);
                break;
            case 9:
                exit(1);

            default:
                printf("Invalid choice\n");
        }

    }

}


void display(struct node *start){
    struct node *p;
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    p = start;
    printf("List is: \n");
        while(p != NULL){
            printf("%d", p->info);
            p = p->link;
        }

}
