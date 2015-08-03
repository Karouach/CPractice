/*==========================================================================
 * File name:exerc_2_5.c
You should develop a program that calculates some statistical values for an
array of integers. Among other things, the program will plot a histogram of
the frequency of the different input numbers in the field.
To test the functionality you need first to create an array of integers
(Table [MAX]) with MAX number of random numbers between 0 and MAXNUMBER.
Then you should write a function that for each possible number between 0 – MAXNUMBER
calculates how many times the number exists in the field. The result is stored
in a new field (frequency []).
Finally, you write a function that given field frequency [] draw the histogram
as followed example: You should use the function and its function declaration below.
Given an Array tabell[]={ 1,2,12, 5,1,0,0,5,9,12, 0,2,3,0} will give the printout:
0 xxxx
1 xx
2 xx
3 x
5 xx
9 x
12 xx

============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define MAX 100
#define MAXNUMBER 20

void create_random(int *tab);
void count_frequency(int *tab, int *freq);
void draw_histogram(int *freq);


int main() {
    int table[MAX];
    int frequency[MAXNUMBER];
    setbuf(stdout, NULL);
    printf("\n\t - NUMBERS -\n\n");
    create_random(table);
    int j = 0;
    for(; j <MAXNUMBER; j++){
        frequency[j] = 0;
    }
    count_frequency(table, frequency);
    printf("\n\t - FREQUENCY -\n\n");
    draw_histogram(frequency);


}

void create_random(int *table){
    srand((int)time(0));
    int i = 0;

    for(;i <MAX; i++){
        int ran = rand() % MAXNUMBER;
        table[i] = ran;
        printf("%d, ", table[i]);
    }printf("\n");



}
void count_frequency(int *tab, int *freq){
    int i = 0;
    for(; i < MAX; i++){
        int number = tab[i];
        freq[number]++;
    }
}
void draw_histogram(int* frequency) {
    int i = 0;
    for (; i < MAXNUMBER; i++) {
        if (frequency[i] != 0) {
            printf("\t%d\t", i);
            int j = 0;
            for (; j < frequency[i]; j++) {
                printf("X");
            }
            printf("%s", "\n");
        }
    }
}

