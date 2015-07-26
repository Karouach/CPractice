
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
struct node *del(struct node *start, int num);


int main()
{
    struct node *start = NULL;
    int choice, num;
    while (1){
        printf("1. Display\n\n");
        printf("2. Add Node at The begining\n\n");
        printf("3. Add Node at The end\n\n");
        printf("4. Delete Node \n\n");
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
                scanf("%d", &num);
                addatend(start, num);
                break;
            case 4:
                printf("Add the number to be deleted\n\n");
                scanf("%d", &num);
                start = del(start, num);
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
struct node *del(struct node *start, int num){
    struct node *temp, *p;
    if(start == NULL){
        printf("Linked list in Empty");
        return start;
    }
    if(start ->info == num){
        temp = start;
        start = start->link;
        free(temp);
        return start;

    }

    p = start;
    while (p->link != NULL){
        if(p->link->info == num){
            temp = p ->link;
            p->link = temp->link;
            free(temp);
            return start;

        }
        p=p->link;
    }printf("The number is not presented in the list");
    return start;
}