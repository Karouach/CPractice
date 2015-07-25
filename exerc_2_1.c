
/*==========================================================================
File name:exerc_2_1.c
Excercise: Write a program that reads in a string with max 20 characters
from stdin  to a local string variable .
Copy the string to another string by using :
a) The library function strcpy(..)
b) A function void copyString(…) not using any libray function.
============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX 20
void copystring(char* to, char * from);

int main()
{
    /*   BUFFERS   */
    char buff1[MAX];
    char buff2[MAX];
    char buff3[MAX];
    setbuf(stdout, NULL);
    printf("Please input string to copy:\n");

    fgets(buff1, MAX, stdin);
    strcpy(buff2, buff1);
    copystring(buff3, buff2);

    /*   PRINT     */
    printf("BUFFER1: %s", buff1);
    printf("BUFFER2: %s", buff2);
    printf("BUFFER3: %s", buff3);


    return EXIT_SUCCESS;

}
void copystring(char* to, char * from){
    int i =0;
    for(;from[i] !='\0'; i++){
        to[i] = from[i];
    }
    to[i] = '\0';

}



