
#include<stdio.h>
#include<stdlib.h>

void swapByValue( int x, int y);
void swapByReference( int *x, int *y);

int main()
{
    int a,b;
    a=4,  b=10;

    swapByValue(a,b);
    printf("\n Interger a = %d and int b = %d ", a,b );
    swapByReference(&a, &b);
    printf("\n Interger a = %d and int b = %d ", a,b );

    system("PAUSE");
    return 0;
}

void swapByValue( int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapByReference( int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


