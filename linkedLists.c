
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
void search(struct node *start, int num);
void count(struct node *start);
void addafter(struct node* start, int num, int num2);
struct node *addbefore(struct node *start, int num, int num2);
struct node *revere(struct node *start);


int main()
{
    struct node *start = NULL;
    int choice, num, num2;
    while (1){
        printf("1. Display\n\n");
        printf("2. Add Node at The begining\n\n");
        printf("3. Add Node at The end\n\n");
        printf("4. Delete Node \n\n");
        printf("5. Search number  \n\n");
        printf("6. Count Nodes  \n\n");
        printf("7. Add  Node After  \n\n");
        printf("8. Add  Node Before  \n\n");
        printf("9. Reverse List  \n\n");
        printf("10. Exit\n\n");
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
            case 5:
                printf("Enter the number to be searched: ");
                scanf("%d", &num);
                search(start, num);
                break;
            case 6:
                count(start);
                break;
            case 7:
                printf("Enter the number to be inserted: ");
                scanf("%d", &num);
                printf("Enter the number after which to insert: ");
                scanf("%d", &num2);
                addafter(start, num, num2);
                break;
            case 8:
                printf("Enter the number to be inserted: ");
                scanf("%d", &num);
                printf("Enter the number before which to insert: ");
                scanf("%d", &num2);
                start = addbefore(start, num, num2);
                break;
            case 9:
                start = revere(start);
                break;


            case 10:
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
void search(struct node *start, int num){
    struct node*p;
    int pos =1;
    p = start;
    while(p!=NULL){
        if(p->info == num){
            printf("%d Found at position %d", num, pos);
            return;
        }
        p= p->link;
        pos++;

    }
    printf("Number not found in the list");


}
void count(struct node *start){
    int count = 0;
    struct node *p;
    p= start;
    while (p!= NULL){
        p=p->link;
        count++;
    }
    printf("Number ot nodes %d\n", count);
}
void addafter(struct node* start, int num, int num2) {
    struct node *temp, *p;
    p = start;
    while (p != NULL) {
        if (p->info == num2) {
            temp = (struct node *) malloc(sizeof(struct node));
            temp->info = num;
            temp->link = p->link;
            p->link = temp;
            return;
        }
        p = p->link;
    }
    printf("the numberdoes not exist");

}
struct node *addbefore(struct node *start, int num, int num2){
    struct node *temp, *p;
    if(start->info == num2){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = num;
        temp->link=start;
        start = temp;
        return start;

    }
    p =start;
    while(p->link != NULL){
        if(p->link->info ==num2){
            temp = (struct node *)malloc(sizeof(struct node));
            temp->info = num;
            temp->link=p->link;
            p->link = temp;
            return start;

        }p=p->link;
    }printf("%d Number is not in the list", num2);
    return start;

}
struct node *revere(struct node *start){
    struct node *previous, *ptr, *next;
    previous = NULL;
    ptr = start;

    while (ptr !=NULL){
        next = ptr->link;
        ptr->link = previous;
        previous = ptr;
        ptr = next;
    }
    start = previous;
    return start;
}