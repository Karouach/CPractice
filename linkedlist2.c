#include <stdlib.h>
#include <stdio.h>

struct Node {
int data;
    struct Node *next;
};
struct Node*head;
void Insert(int data);
void Print();
void Delete(int n);

void Delete(int n){
    struct Node *temp1 = head;
    if(n ==1) {
        head = temp1->next; //head now points to second node
        free(temp1);
        return;

    }
    int i;
    for(i = 0; i < n-2; i++)
        temp1 = temp1->next; //temp points out to (n-1) th node
    struct Node *temp2 = temp1->next; //nth node
    temp1->next = temp2->next;
    free(temp2);
}



int main(){
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    Delete(n);
    Print();


}