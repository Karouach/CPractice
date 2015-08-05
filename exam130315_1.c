/*==========================================================================================================
 * File name:exam130315_1.c
The program is compiled and the executable code will get the filename e_exam_ex_1.exe .
What will be printed out on the standard out if you start the program with the following two different commands:
a) e_exam_ex_1 "How are you to day"
b) e_exam_ex_ 1 How are you today

============================================================================================================*/

#include<stdio.h>
#include<stdlib.h>



int main(int argc,char *argv[]) {
    int n = 0;
    char *str = argv[1];
    if(argc!=2){
        printf("\n Start with just one argument");
        return 1;
    }
    while (*str != '\0'){
        n++;
        str++;
    }
    printf("\n string is %s and %d st \n ", argv[1], n);
    return 0;


}
