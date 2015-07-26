
/*==========================================================================

============================================================================*/

#include<stdio.h>
#include<stdlib.h>


struct node {
    int info;
    struct node *link;
};

void display(struct node *start);
struct node *addatbeg(struct node *start, int num);
void addatend(struct node *start, int num);


int main()
{
    struct node *start = NULL;
    int choice, num;
    while (1){
        printf("n1. Display\n\n");
        printf("2. Add Node at The begining\n\n");
        printf("3. Add Node at The end\n\n");
        printf("9. Exit\n\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                display(start);
                break;
            case 2:
                printf("Add the number to be inserted\n\n");
                scanf("%d", &num);
                start = addatbeg(start, num);
                break;
            case 3:
                printf("Add the number to be inserted\n\n");
                scanf("%3", &num);
                addatend(start, num);
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
struct node *addatbeg(struct node *start, int num){
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));
    temp ->info = num;
    temp->link = start;
    start = temp;
    return start;

}
void addatend(struct node *start, int num){
    struct node *temp, *p;
    temp = (struct node *) malloc(sizeof(struct node));
    temp ->info = num;
    p = start;
    while(p->link != NULL){
        p = p->link;
    }
    p->link = temp;
    temp->link= NULL;


}