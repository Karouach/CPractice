/*==========================================================================================================
 * File name:exam130315_2.c

============================================================================================================*/

#include<stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX 20



void get_user_input(char *inbuffer);

int main() {
    char buffer[MAX];
    char *choice;
    get_user_input(buffer);
    return 0;


}
void get_user_input(char *inbuffer){
    char *pos;
    printf("Enter your choice: ");
    fgets(inbuffer, MAX, stdin);
    pos = strchr(inbuffer, '\n');
    if(pos != NULL){
        *pos = '\0';
    }


}