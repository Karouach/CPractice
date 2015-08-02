/*==========================================================================
 * File name:exerc_2_3.c
Create a program that reads in two strings from the command line
 and checks if it is two strings and if the two strings are identical or not.
Do this with and without library function strcmp(..).
Test: exerc_2_3 string1 string2

============================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define UINT unsigned int

int stringcompare(const char *str1, const char *str2) {
    UINT size1 = strlen(str1);
    UINT size2 = strlen(str2);

    if (size1 == size2) {
        UINT i = 0;
        for (; i < size1; i++) {
            if (str1[i] != str2[i]) {
                return EXIT_FAILURE;
            }
        }
        return EXIT_SUCCESS;

    } else {
        return EXIT_FAILURE;
    }

}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf(" The numbers of arguments is incorrect");
        return EXIT_FAILURE;
    }
    int failed = 0;

    if (stringcompare(argv[1], argv[2]) == 0) {
        printf("Alike\n");
        return EXIT_SUCCESS;
    } else {
        printf("Compare Failed");
        failed = 1;
    }
    if (strcmp(argv[1], argv[2]) == 0) {
        printf("Alike\n");
        return EXIT_SUCCESS;
    } else {
        printf("Compare Failed");
        failed = 1;

    }
    return failed;
    return EXIT_SUCCESS;
}
