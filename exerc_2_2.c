/*==========================================================================
 * File name:exerc_2_2.c
 * Create an array of integers, array[MAX], and fill it with MAX
 * random numbers. Let the program then print out the following:
 * The value of array ( address)
 * First integer ( array[0]).
 * The size of an integer (number of bytes) and the size of the array.
 * Double all values in the array by using pointers.

============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define MAX 5

void double_array(int *begin);

int main() {
    int array[MAX];
    srand((int) time(0));
    int i;
    for (i = 0; i < MAX; i++) {
        array[i] = rand() % 100;
        printf("The original value numbers in the array %d\n", array[i]);
    }

    printf("The value of array ( address) %p\n", array);
    printf("First integer ( array[0]) %d\n", array[0]);
    printf("The size of an integer (number of bytes) and the size of the array. %d\n", sizeof(int));
    double_array(array);

    return EXIT_SUCCESS;
}
void double_array(int *begin) {
    int *p = begin;
    for (; p != begin + MAX; p++) {
        *p = (*p) * 2;
        printf("The doubled value numbers in the array %d\n", *p);
    }

}
