/*==========================================================================================================
 * File name:exerc_2_6.c
 * We want to use an array for a queue of positive integers. The numbers must be entered in to the
queue which is done through put them into the last vacant location in the field. ( In the figure below
from right ) . An integer is taken out from the queue by taking the first number in the array. When an
integer is taken out the other integers shall moves up a step in the queue (to the left of the figure
below ).
A vacancy in the queue is represented by the integer ?1 . In a full queue there is no integer ?1.
When you take out an integer from a full queue , the integer ?1 must be stored in the last position.
Examples below show a queue of five positions.
que int [ MAX ] ; Here MAX equal to 5
Queue from the start : ?1 ?1 ?1 ?1 ?1
Queue after you put in the numbers 3, 4 and 5 in turn. 3 4 5 ?1 ?1
Queue after you then put in 8 : 3 4 5 8 ?1
And after taken out an integer 4 5 8 ?1 ?1
a) Write a function int input (int list [] , int number) that adds a number in the queue according to
the rules , and returns number 1 if the number could be entered and 0 if the queue is full .
b ) Write a function void initQue (int list [] ) which initializes the list to initially contain
five vacant positions (?1) and a main?program that sets up an empty queue and then tests a number
of inputs and finally prints out the actual status of the queue.


============================================================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define MAX 5

int initQue (int list [MAX] ){
    int i = 0;
    for (; i < MAX; i++){
        list[i] = -1;
    }
}
int input (int list [] , int number){
    int i = 0;
    for(; i < MAX; i++){
        if(list[i] == -1){
            list[i] = number;
            return EXIT_SUCCESS;
        }
    }
    return  EXIT_FAILURE;
}
void print_func(int list []){
    int i = 0;
    for(; i< MAX; i++){
        printf("%d", list[i]);
    }printf("%s", "\n");
}

void pop(int queue []){
    int i;
    for( i = 0 ; i < MAX -1; i++){
        if (queue[i] != -1) {
            queue[i] = queue[i + 1];
        }
    }
    queue[MAX-1] = -1;
}



int main() {
    int queue[MAX];

    initQue(queue);
    print_func(queue);
    initQue(queue);
    input(queue, 3);
    input(queue, 4);
    input(queue, 5);
    print_func(queue);
    input(queue, 8);
    print_func(queue);
    pop(queue);
    print_func(queue);

    return 0;



}

