/*==========================================================================
 * File name:exerc_2_4.c
Create a program that reads in a string and determines if the string
is a palindrome, namely it is the same word if read from both sides.
Initially, one may only use simple strings without any space character in it.
Example of palindromes : level, rotor and racecar.

============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindromecheck(const char *str1){
    int length = strlen(str1);
    int i= 0;

    for(; i <length; i++){
        if(str1[i] != str1[length - 1 - i]){
            printf("%c is not equal to %c\n",str1[i],str1[length - 1- i]);
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}
int main(int argc, char *argv[]) {

    char str1[255];
    setbuf(stdout, NULL);
    printf("Enter a palindrome:\n");
    scanf("%s", str1);
    if(palindromecheck(str1) == 0){
        printf("Correct!\n");
    }else{
        printf("InCorrect!\n");
    }
    return EXIT_SUCCESS;
}


